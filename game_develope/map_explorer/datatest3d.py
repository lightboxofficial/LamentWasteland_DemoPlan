from ursina import *

app = Ursina()

texture_map = {
    0: r'C:\Users\i\Pictures\texture0.png',
    1: r'C:\Users\i\Pictures\texture1.jpg',
    2: r'C:\Users\i\Pictures\texture2.png'
}
#创建字典，这里是事例，因为我还没有搞清楚codespace的绝对路径是什么样的
#所以我真的是个蒸馍，我也不知道咋弄，所以就先这样吧......

def setblock(x, y, z, texture_index):
    texture_path = texture_map.get(texture_index, None)
    if texture_path:
        texture_obj = load_texture(texture_path)
    else:
        texture_obj = None  #啥都没有，就加载小白条纹理
    cube = Entity(
        model='cube',
        texture=texture_obj,
        scale=(1, 1, 1),
        position=(x, y, z)
    )
app.run() 