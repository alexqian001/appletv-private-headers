/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface MRShaderManager : NSObject {
	NSMutableDictionary *mGLShadersPerContext;	// 4 = 0x4
	NSMutableDictionary *mShadersPerContext;	// 8 = 0x8
	NSMutableDictionary *mShaderDescriptions;	// 12 = 0xc
	NSLock *mGLShadersPerContextLock;	// 16 = 0x10
	NSLock *mShadersPerContextLock;	// 20 = 0x14
}
+ (void)initialize;	// 0x36118dc1
+ (id)shaderKeyForShaderID:(id)shaderID andArguments:(id)arguments;	// 0x3611a6ad
+ (id)sharedManager;	// 0x36118e29
- (id)init;	// 0x36118e39
- (unsigned)_glShaderForID:(id)anId inBaseContext:(id)baseContext isFragmentShader:(BOOL)shader withArguments:(id)arguments;	// 0x36119d29
- (void)cleanup;	// 0x36119839
- (void)dealloc;	// 0x361197b9
- (void)finalize;	// 0x361197f9
- (void)forgetContext:(id)context;	// 0x361199cd
- (void)registerShaderWithFragmentShaderSource:(id)fragmentShaderSource andVertexShaderName:(id)name forShaderID:(id)shaderID;	// 0x3611a8bd
- (void)registerVertexShaderWithVertexShaderSource:(id)vertexShaderSource forShaderID:(id)shaderID;	// 0x3611a82d
- (void)releaseResources;	// 0x361198b5
- (id)shaderForShaderID:(id)shaderID inContext:(id)context withArguments:(id)arguments;	// 0x3611a3a5
@end
