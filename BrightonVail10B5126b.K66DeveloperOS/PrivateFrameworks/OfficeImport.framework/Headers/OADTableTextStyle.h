/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x34992531; S=0x3493aa85; converted property
@property(retain) id color;	// G=0x34992521; S=0x3493a81d; converted property
@property(retain) id fontReference;	// G=0x34a51d31; S=0x3493a479; converted property
@property(assign) int italic;	// G=0x34a51d41; S=0x34a51d51; converted property
+ (int)defaultBold;	// 0x34a51e2d
+ (id)defaultColor;	// 0x34a51d61
+ (id)defaultFontReference;	// 0x34a51da9
+ (int)defaultItalic;	// 0x34a51e31
+ (id)defaultStyle;	// 0x34a51e35
- (id)init;	// 0x3493a42d
- (void)applyOverridesFrom:(id)from;	// 0x34a51ff1
// converted property getter: - (int)bold;	// 0x34992531
// converted property getter: - (id)color;	// 0x34992521
- (void)dealloc;	// 0x34941d59
// converted property getter: - (id)fontReference;	// 0x34a51d31
// converted property getter: - (int)italic;	// 0x34a51d41
// converted property setter: - (void)setBold:(int)bold;	// 0x3493aa85
// converted property setter: - (void)setColor:(id)color;	// 0x3493a81d
// converted property setter: - (void)setFontReference:(id)reference;	// 0x3493a479
// converted property setter: - (void)setItalic:(int)italic;	// 0x34a51d51
- (id)shallowCopy;	// 0x34a51f21
@end

