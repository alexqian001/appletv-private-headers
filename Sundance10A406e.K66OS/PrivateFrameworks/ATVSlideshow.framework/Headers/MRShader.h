/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSDictionary, MRContext;

@interface MRShader : NSObject {
	NSString *mShaderID;	// 4 = 0x4
	NSString *mShaderKey;	// 8 = 0x8
	NSDictionary *mDescription;	// 12 = 0xc
	MRContext *mContext;	// 16 = 0x10
	unsigned mProgram;	// 20 = 0x14
	unsigned mVertexShader;	// 24 = 0x18
	unsigned mFragmentShader;	// 28 = 0x1c
	MRContext *mUseContext;	// 32 = 0x20
	float mModelViewProjectionMatrix[16];	// 36 = 0x24
	float mNormal[3];	// 100 = 0x64
	float mTextureMatrix[4][16];	// 112 = 0x70
	float mForeColor[4];	// 368 = 0x170
	int mModelViewProjectionMatrixLocation;	// 384 = 0x180
	int mNormalLocation;	// 388 = 0x184
	int mTextureMatrixLocation[4];	// 392 = 0x188
	int mForeColorLocation;	// 408 = 0x198
	NSMutableDictionary *mUniformLocations;	// 412 = 0x19c
	NSMutableDictionary *mUniforms;	// 416 = 0x1a0
	NSMutableDictionary *mAttributeLocations;	// 420 = 0x1a4
	BOOL mTextureUnitsAreBound;	// 424 = 0x1a8
}
@property(readonly, assign, nonatomic) unsigned program;	// G=0x3611bd45; @synthesize=mProgram
@property(readonly, assign) NSString *shaderID;	// G=0x3611bd1d; @synthesize=mShaderID
@property(readonly, assign) NSString *shaderKey;	// G=0x3611bd31; @synthesize=mShaderKey
@property(assign) BOOL textureUnitsAreBound;	// G=0x3611bd55; S=0x3611bd6d; @synthesize=mTextureUnitsAreBound
@property(retain) MRContext *useContext;	// G=0x3611ae35; S=0x3611ae45; 
- (id)initWithShaderID:(id)shaderID shaderKey:(id)key description:(id)description vertexShader:(unsigned)shader andFragmentShader:(unsigned)shader5 inContext:(id)context;	// 0x3611a961
- (int)_locationForUniform:(id)uniform;	// 0x3611b1dd
- (BOOL)caresAboutForeColor;	// 0x3611b0f9
- (BOOL)caresAboutNormal;	// 0x3611af49
- (void)dealloc;	// 0x3611ac45
- (int)locationForAttribute:(id)attribute;	// 0x3611bc69
// declared property getter: - (unsigned)program;	// 0x3611bd45
- (void)setForeColor:(const float *)color;	// 0x3611b13d
- (void)setModelViewProjectionMatrix:(float [16])matrix;	// 0x3611aea9
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x3611af8d
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x3611b03d
// declared property setter: - (void)setTextureUnitsAreBound:(BOOL)bound;	// 0x3611bd6d
- (void)setUniform:(id)uniform forKey:(id)key;	// 0x3611ba69
- (void)setUniformFloat:(float)aFloat forKey:(id)key;	// 0x3611b395
- (void)setUniformInt:(int)int forKey:(id)key;	// 0x3611b291
- (void)setUniformMat3:(float [16])a3 forKey:(id)key;	// 0x3611b921
- (void)setUniformMat4:(float [16])a4 forKey:(id)key;	// 0x3611b9c5
- (void)setUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x3611b4b5
- (void)setUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x3611b611
- (void)setUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x3611b799
// declared property setter: - (void)setUseContext:(id)context;	// 0x3611ae45
// declared property getter: - (id)shaderID;	// 0x3611bd1d
// declared property getter: - (id)shaderKey;	// 0x3611bd31
// declared property getter: - (BOOL)textureUnitsAreBound;	// 0x3611bd55
// declared property getter: - (id)useContext;	// 0x3611ae35
@end

