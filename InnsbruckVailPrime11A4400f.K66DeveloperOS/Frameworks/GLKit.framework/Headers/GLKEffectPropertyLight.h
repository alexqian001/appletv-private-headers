/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKEffectProperty.h"
#import "GLKit-Structs.h"

@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty {
	unsigned char _enabled;	// 48 = 0x30
	GLKVector4 _position;	// 64 = 0x40
	GLKVector4 _ambientColor;	// 80 = 0x50
	GLKVector4 _diffuseColor;	// 96 = 0x60
	GLKVector4 _specularColor;	// 112 = 0x70
	GLKVector3 _spotDirection;	// 128 = 0x80
	float _spotExponent;	// 140 = 0x8c
	float _spotCutoff;	// 144 = 0x90
	float _constantAttenuation;	// 148 = 0x94
	float _linearAttenuation;	// 152 = 0x98
	float _quadraticAttenuation;	// 156 = 0x9c
	GLKEffectPropertyTransform *_transform;	// 160 = 0xa0
	unsigned char _positionEyeStale;	// 164 = 0xa4
	unsigned char _firstLight;	// 165 = 0xa5
	float _spotCutoffDegrees;	// 168 = 0xa8
	unsigned long long *_effectDirtyUniforms;	// 172 = 0xac
	int _positionEyeLoc;	// 176 = 0xb0
	int _ambientLoc;	// 180 = 0xb4
	int _diffuseLoc;	// 184 = 0xb8
	int _specularLoc;	// 188 = 0xbc
	int _normalizedSpotDirectionEyeLoc;	// 192 = 0xc0
	int _spotExponentLoc;	// 196 = 0xc4
	int _spotCutoffLoc;	// 200 = 0xc8
	int _constantAttenuationLoc;	// 204 = 0xcc
	int _linearAttenuationLoc;	// 208 = 0xd0
	int _quadraticAttenuationLoc;	// 212 = 0xd4
	int _normalizeLoc;	// 216 = 0xd8
	int _ambientTermLoc;	// 220 = 0xdc
	int _lightIndex;	// 224 = 0xe0
	int _lightingType;	// 228 = 0xe4
	GLKVector3 _normalizedSpotDirectionEye;	// 232 = 0xe8
	GLKVector4 _positionEye;	// 256 = 0x100
	GLKBigInt_s _allVshMasks;	// 272 = 0x110
	GLKBigInt_s _allFshMasks;	// 288 = 0x120
}
@property(readonly, assign, nonatomic) GLKBigInt_s allFshMasks;	// G=0x2dd44ac1; @synthesize=_allFshMasks
@property(readonly, assign, nonatomic) GLKBigInt_s allVshMasks;	// G=0x2dd44aa9; @synthesize=_allVshMasks
@property(assign, nonatomic) GLKVector4 ambientColor;	// G=0x2dd44799; S=0x2dd42e1d; @synthesize=_ambientColor
@property(assign, nonatomic) int ambientLoc;	// G=0x2dd44909; S=0x2dd44919; @synthesize=_ambientLoc
@property(assign, nonatomic) int ambientTermLoc;	// G=0x2dd44a49; S=0x2dd44a59; @synthesize=_ambientTermLoc
@property(assign, nonatomic) float constantAttenuation;	// G=0x2dd44869; S=0x2dd43b99; @synthesize=_constantAttenuation
@property(assign, nonatomic) int constantAttenuationLoc;	// G=0x2dd449c9; S=0x2dd449d9; @synthesize=_constantAttenuationLoc
@property(assign, nonatomic) GLKVector4 diffuseColor;	// G=0x2dd447b1; S=0x2dd42d71; @synthesize=_diffuseColor
@property(assign, nonatomic) int diffuseLoc;	// G=0x2dd44929; S=0x2dd44939; @synthesize=_diffuseLoc
@property(assign, nonatomic) unsigned long long *effectDirtyUniforms;	// G=0x2dd44899; S=0x2dd448a9; @synthesize=_effectDirtyUniforms
@property(assign, nonatomic) unsigned char enabled;	// G=0x2dd44735; S=0x2dd43979; @synthesize=_enabled
@property(assign, nonatomic) unsigned char firstLight;	// G=0x2dd44a89; S=0x2dd44a99; @synthesize=_firstLight
@property(readonly, assign, nonatomic) unsigned char isAttenuated;	// G=0x2dd43fed; 
@property(readonly, assign, nonatomic) unsigned char isSpot;	// G=0x2dd43fa1; 
@property(assign, nonatomic) int lightIndex;	// G=0x2dd44a69; S=0x2dd44305; @synthesize=_lightIndex
@property(assign, nonatomic) int lightingType;	// G=0x2dd44a79; S=0x2dd439e9; @synthesize=_lightingType
@property(assign, nonatomic) float linearAttenuation;	// G=0x2dd44879; S=0x2dd43b1d; @synthesize=_linearAttenuation
@property(assign, nonatomic) int linearAttenuationLoc;	// G=0x2dd449e9; S=0x2dd449f9; @synthesize=_linearAttenuationLoc
@property(assign, nonatomic) int normalizeLoc;	// G=0x2dd44a29; S=0x2dd44a39; @synthesize=_normalizeLoc
@property(assign, nonatomic) GLKVector3 normalizedSpotDirectionEye;	// G=0x2dd447fd; S=0x2dd44819; @synthesize=_normalizedSpotDirectionEye
@property(assign, nonatomic) int normalizedSpotDirectionEyeLoc;	// G=0x2dd44969; S=0x2dd44979; @synthesize=_normalizedSpotDirectionEyeLoc
@property(assign, nonatomic) GLKVector4 position;	// G=0x2dd44745; S=0x2dd42ee1; @synthesize=_position
@property(assign, nonatomic) GLKVector4 positionEye;	// G=0x2dd4475d; S=0x2dd44775; @synthesize=_positionEye
@property(assign, nonatomic) int positionEyeLoc;	// G=0x2dd448e9; S=0x2dd448f9; @synthesize=_positionEyeLoc
@property(assign, nonatomic) unsigned char positionEyeStale;	// G=0x2dd448c9; S=0x2dd448d9; @synthesize=_positionEyeStale
@property(assign, nonatomic) float quadraticAttenuation;	// G=0x2dd44889; S=0x2dd43aa1; @synthesize=_quadraticAttenuation
@property(assign, nonatomic) int quadraticAttenuationLoc;	// G=0x2dd44a09; S=0x2dd44a19; @synthesize=_quadraticAttenuationLoc
@property(assign, nonatomic) GLKVector4 specularColor;	// G=0x2dd447c9; S=0x2dd42cc5; @synthesize=_specularColor
@property(assign, nonatomic) int specularLoc;	// G=0x2dd44949; S=0x2dd44959; @synthesize=_specularLoc
@property(assign, nonatomic) float spotCutoff;	// G=0x2dd43ca1; S=0x2dd43c11; @synthesize=_spotCutoff
@property(assign, nonatomic) float spotCutoffDegrees;	// G=0x2dd44849; S=0x2dd44859; @synthesize=_spotCutoffDegrees
@property(assign, nonatomic) int spotCutoffLoc;	// G=0x2dd449a9; S=0x2dd449b9; @synthesize=_spotCutoffLoc
@property(assign, nonatomic) GLKVector3 spotDirection;	// G=0x2dd447e1; S=0x2dd42b45; @synthesize=_spotDirection
@property(assign, nonatomic) float spotExponent;	// G=0x2dd44839; S=0x2dd43a41; @synthesize=_spotExponent
@property(assign, nonatomic) int spotExponentLoc;	// G=0x2dd44989; S=0x2dd44999; @synthesize=_spotExponentLoc
@property(retain, nonatomic) GLKEffectPropertyTransform *transform;	// G=0x2dd448b9; S=0x2dd42b01; @synthesize=_transform
+ (void)setStaticMasksWithVshRoot:(id)vshRoot fshRoot:(id)root;	// 0x2dd43cb1
- (id)initWithTransform:(id)transform lightingType:(int)type firstLight:(unsigned char)light;	// 0x2dd422e9
// declared property getter: - (GLKBigInt_s)allFshMasks;	// 0x2dd44ac1
// declared property getter: - (GLKBigInt_s)allVshMasks;	// 0x2dd44aa9
// declared property getter: - (GLKVector4)ambientColor;	// 0x2dd44799
// declared property getter: - (int)ambientLoc;	// 0x2dd44909
// declared property getter: - (int)ambientTermLoc;	// 0x2dd44a49
- (void)bind;	// 0x2dd440a9
// declared property getter: - (float)constantAttenuation;	// 0x2dd44869
// declared property getter: - (int)constantAttenuationLoc;	// 0x2dd449c9
- (void)dealloc;	// 0x2dd446e9
- (id)description;	// 0x2dd44435
// declared property getter: - (GLKVector4)diffuseColor;	// 0x2dd447b1
// declared property getter: - (int)diffuseLoc;	// 0x2dd44929
- (void)dirtyAllUniforms;	// 0x2dd4244d
// declared property getter: - (unsigned long long *)effectDirtyUniforms;	// 0x2dd44899
// declared property getter: - (unsigned char)enabled;	// 0x2dd44735
// declared property getter: - (unsigned char)firstLight;	// 0x2dd44a89
- (bool)includeFshShaderTextForRootNode:(id)rootNode;	// 0x2dd43f09
- (bool)includeVshShaderTextForRootNode:(id)rootNode;	// 0x2dd43e71
- (void)initializeMasks;	// 0x2dd425e1
// declared property getter: - (unsigned char)isAttenuated;	// 0x2dd43fed
// declared property getter: - (unsigned char)isSpot;	// 0x2dd43fa1
// declared property getter: - (int)lightIndex;	// 0x2dd44a69
// declared property getter: - (int)lightingType;	// 0x2dd44a79
// declared property getter: - (float)linearAttenuation;	// 0x2dd44879
// declared property getter: - (int)linearAttenuationLoc;	// 0x2dd449e9
// declared property getter: - (int)normalizeLoc;	// 0x2dd44a29
// declared property getter: - (GLKVector3)normalizedSpotDirectionEye;	// 0x2dd447fd
// declared property getter: - (int)normalizedSpotDirectionEyeLoc;	// 0x2dd44969
// declared property getter: - (GLKVector4)position;	// 0x2dd44745
// declared property getter: - (GLKVector4)positionEye;	// 0x2dd4475d
// declared property getter: - (int)positionEyeLoc;	// 0x2dd448e9
// declared property getter: - (unsigned char)positionEyeStale;	// 0x2dd448c9
// declared property getter: - (float)quadraticAttenuation;	// 0x2dd44889
// declared property getter: - (int)quadraticAttenuationLoc;	// 0x2dd44a09
// declared property setter: - (void)setAmbientColor:(GLKVector4)color;	// 0x2dd42e1d
// declared property setter: - (void)setAmbientLoc:(int)loc;	// 0x2dd44919
// declared property setter: - (void)setAmbientTermLoc:(int)loc;	// 0x2dd44a59
// declared property setter: - (void)setConstantAttenuation:(float)attenuation;	// 0x2dd43b99
// declared property setter: - (void)setConstantAttenuationLoc:(int)loc;	// 0x2dd449d9
// declared property setter: - (void)setDiffuseColor:(GLKVector4)color;	// 0x2dd42d71
// declared property setter: - (void)setDiffuseLoc:(int)loc;	// 0x2dd44939
// declared property setter: - (void)setEffectDirtyUniforms:(unsigned long long *)uniforms;	// 0x2dd448a9
// declared property setter: - (void)setEnabled:(unsigned char)enabled;	// 0x2dd43979
// declared property setter: - (void)setFirstLight:(unsigned char)light;	// 0x2dd44a99
- (void)setGLDefaults;	// 0x2dd42465
// declared property setter: - (void)setLightIndex:(int)index;	// 0x2dd44305
// declared property setter: - (void)setLightingType:(int)type;	// 0x2dd439e9
// declared property setter: - (void)setLinearAttenuation:(float)attenuation;	// 0x2dd43b1d
// declared property setter: - (void)setLinearAttenuationLoc:(int)loc;	// 0x2dd449f9
- (void)setNormalize:(unsigned char)normalize;	// 0x2dd43965
// declared property setter: - (void)setNormalizeLoc:(int)loc;	// 0x2dd44a39
// declared property setter: - (void)setNormalizedSpotDirectionEye:(GLKVector3)eye;	// 0x2dd44819
// declared property setter: - (void)setNormalizedSpotDirectionEyeLoc:(int)loc;	// 0x2dd44979
// declared property setter: - (void)setPosition:(GLKVector4)position;	// 0x2dd42ee1
// declared property setter: - (void)setPositionEye:(GLKVector4)eye;	// 0x2dd44775
// declared property setter: - (void)setPositionEyeLoc:(int)loc;	// 0x2dd448f9
// declared property setter: - (void)setPositionEyeStale:(unsigned char)stale;	// 0x2dd448d9
// declared property setter: - (void)setQuadraticAttenuation:(float)attenuation;	// 0x2dd43aa1
// declared property setter: - (void)setQuadraticAttenuationLoc:(int)loc;	// 0x2dd44a19
- (void)setShaderBindings;	// 0x2dd4285d
// declared property setter: - (void)setSpecularColor:(GLKVector4)color;	// 0x2dd42cc5
// declared property setter: - (void)setSpecularLoc:(int)loc;	// 0x2dd44959
// declared property setter: - (void)setSpotCutoff:(float)cutoff;	// 0x2dd43c11
// declared property setter: - (void)setSpotCutoffDegrees:(float)degrees;	// 0x2dd44859
// declared property setter: - (void)setSpotCutoffLoc:(int)loc;	// 0x2dd449b9
// declared property setter: - (void)setSpotDirection:(GLKVector3)direction;	// 0x2dd42b45
// declared property setter: - (void)setSpotExponent:(float)exponent;	// 0x2dd43a41
// declared property setter: - (void)setSpotExponentLoc:(int)loc;	// 0x2dd44999
// declared property setter: - (void)setTransform:(id)transform;	// 0x2dd42b01
// declared property getter: - (GLKVector4)specularColor;	// 0x2dd447c9
// declared property getter: - (int)specularLoc;	// 0x2dd44949
// declared property getter: - (float)spotCutoff;	// 0x2dd43ca1
// declared property getter: - (float)spotCutoffDegrees;	// 0x2dd44849
// declared property getter: - (int)spotCutoffLoc;	// 0x2dd449a9
// declared property getter: - (GLKVector3)spotDirection;	// 0x2dd447e1
// declared property getter: - (float)spotExponent;	// 0x2dd44839
// declared property getter: - (int)spotExponentLoc;	// 0x2dd44989
// declared property getter: - (id)transform;	// 0x2dd448b9
@end
