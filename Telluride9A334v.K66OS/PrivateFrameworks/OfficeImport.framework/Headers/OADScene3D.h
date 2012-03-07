/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class OADBackdrop, OADLightRig, OADCamera;

__attribute__((visibility("hidden")))
@interface OADScene3D : NSObject <NSCopying> {
@private
	OADCamera *mCamera;	// 4 = 0x4
	OADLightRig *mLightRig;	// 8 = 0x8
	OADBackdrop *mBackdrop;	// 12 = 0xc
}
@property(retain) id backdrop;	// G=0x3578e7ad; S=0x3578f0bd; converted property
@property(retain) id camera;	// G=0x3578e78d; S=0x356ac7b1; converted property
@property(retain) id lightRig;	// G=0x3578e79d; S=0x356acab9; converted property
+ (id)nullScene3D;	// 0x3559f1fd
- (id)init;	// 0x3559f245
// converted property getter: - (id)backdrop;	// 0x3578e7ad
// converted property getter: - (id)camera;	// 0x3578e78d
- (id)copyWithZone:(NSZone *)zone;	// 0x3578f0fd
- (void)dealloc;	// 0x356b16a1
- (unsigned)hash;	// 0x3578f065
- (BOOL)isEqual:(id)equal;	// 0x3578ef61
// converted property getter: - (id)lightRig;	// 0x3578e79d
// converted property setter: - (void)setBackdrop:(id)backdrop;	// 0x3578f0bd
// converted property setter: - (void)setCamera:(id)camera;	// 0x356ac7b1
// converted property setter: - (void)setLightRig:(id)rig;	// 0x356acab9
@end
