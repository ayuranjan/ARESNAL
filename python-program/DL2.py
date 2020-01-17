import tensorflow as tf 
a = tf.placeholder(tf.float32)
b = tf.placeholder(tf.float32)
c =a+b 
sess = tf.Session()
print(sess.run(c,{a:[1,3],b:[2,4]}))# we pass dictionary 