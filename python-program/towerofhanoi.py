# N disk are placed on tower A  in decesing order from bottom and we have to move all these disk to Tower C in same oder as in A.

  
def TowerOfHanoi(n , from_rod, to_rod, aux_rod): 
    if n == 1: 
        print "Move disk 1 from rod",from_rod,"to rod",to_rod 
        return
    TowerOfHanoi(n-1, from_rod, aux_rod, to_rod) 
    print "Move disk",n,"from rod",from_rod,"to rod",to_rod 
    TowerOfHanoi(n-1, aux_rod, to_rod, from_rod) 
          

n = 4
TowerOfHanoi(n, "A","B","C") 