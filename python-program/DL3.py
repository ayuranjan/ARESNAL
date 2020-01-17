import tensorflow as tf 
w = tf.Variable([.3],tf.float32)
b = tf.Variable([-.3],tf.float32)
x = tf.placeholder(tf.float32)
output = w * x + b
init = tf.global_variables_initializer()
sess = tf.Session()
#sess.run(init)
y = tf.placeholder(tf.float32)
squared_deltas = tf.square(output - y)
loss = tf.reduce_sum(squared_deltas)
optimezer = tf.train.GradientDescentOptimizer(0.01)#0.1 is learning rate 
train = optimezer.minimize(loss)
sess.run(init)
for i in range(1000):
    sess.run(train,{x:[1,2,3,4],y:[0,-1,-2,-3]})
#print(sess.run(output,{x:[1,2,3,4]}))
#print(sess.run(loss,{x:[1,2,3,4],y:[0,-1,-2,-3]}))
print(sess.run([w,b])) #it will give the closes value of w and b which will make  ouput = desired ouput ..here if w =-1 and b =1 

