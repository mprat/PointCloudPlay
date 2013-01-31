//
//  Shader.fsh
//  PointCloudPlay
//
//  Created by Michele Pratusevich on 1/31/13.
//  Copyright (c) 2013 Michele Pratusevich. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
