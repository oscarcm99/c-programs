function Coord2D(){
    this.x = x
    this.y = y
}

function Movil(pos,vel,acc){
    this.pos = pos || {x:0, y:0}
    this.vel = vel || {x:0, y:0}
    this.acc = acc || {x:0, y:0}
}
