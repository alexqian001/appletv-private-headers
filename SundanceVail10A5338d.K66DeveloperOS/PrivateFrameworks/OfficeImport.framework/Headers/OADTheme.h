/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {
	OADBaseStyles *mBaseStyles;	// 4 = 0x4
	OADDefaultProperties *mShapeDefaults;	// 8 = 0x8
	OADDefaultProperties *mLineDefaults;	// 12 = 0xc
	OADDefaultProperties *mTextDefaults;	// 16 = 0x10
}
- (id)init;	// 0x3396cc71
- (void)addDefaults;	// 0x33ba8dc9
- (id)addLineDefaults;	// 0x3396e8f9
- (id)addShapeDefaults;	// 0x3396cf49
- (id)addTextDefaults;	// 0x3396e949
- (id)baseStyles;	// 0x33972115
- (void)dealloc;	// 0x339dd7d5
- (id)lineDefaults;	// 0x33ba8e91
- (id)shapeDefaults;	// 0x3396ea41
- (id)textDefaults;	// 0x33971e61
@end

