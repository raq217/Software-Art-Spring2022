COMMOTION OF THE OCEAN


For this assignment I wanted to mimic the behavior of the waves. 
The code utilizes the meshes and vertex movements which can be adjusted in the "movement" slider of the panel. This is the primary rule that the user faces, adjusting the speed at witch the vertexes are able to move. It is shaped in a square that splits into two different triangles which distort. 

  for (int x = 0; x < size; x++){
    for (int y = 0; y < size; y++){
      mesh.addVertex(ofPoint(x - size / 3, y - size / 3));
    }
  }
  
  for (int x = 0; x < size - 2; x++){
    for (int y = 0; y < size - 2; y++){
      mesh.addIndex(x + y * size);
      mesh.addIndex((x + 1) + y * size);
      mesh.addIndex(x + (y + 1) * size);
      mesh.addIndex((x + 1) + y * size);
      mesh.addIndex((x + 1) + (y + 1) * size);
      mesh.addIndex(x + (y + 1) * size);


For the colors they can be changed to the user's preferences using the GUI panel. 
Unfortunately the gifs could not be uploaded as they were too big (even after compression), here are the links:

Link 1: https://gyazo.com/6276a07c3205f6dd7c9d20ab61ec30e9

Link 2: https://gyazo.com/365aaa1c021b0b2fde0998589cfd008e




Stage 1:
<img width="993" alt="Screen Shot 2022-04-13 at 11 41 17 PM" src="https://user-images.githubusercontent.com/66205383/163257580-15764f1f-91f4-41af-bf1a-d4ccdff26eec.png">

Stage 2: 
<img width="995" alt="Screen Shot 2022-04-13 at 11 41 31 PM" src="https://user-images.githubusercontent.com/66205383/163257622-519ee602-120f-4d4c-a4af-1c7bf094f166.png">

Stage 3:
<img width="990" alt="Screen Shot 2022-04-13 at 11 41 50 PM" src="https://user-images.githubusercontent.com/66205383/163257660-63f15a0a-72c2-481d-b969-336012f16634.png">
