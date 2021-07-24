uniform sampler2D u_texture;
varying highp vec4 v_position;
varying highp vec2 v_texcoord;
varying highp vec3 v_normal;

void main(void)
{
    gl_FragColor = texture2D(u_texture, v_texcoord);
}
