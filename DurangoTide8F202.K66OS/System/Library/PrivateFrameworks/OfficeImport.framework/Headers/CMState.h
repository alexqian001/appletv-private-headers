/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColorMap, NSMutableDictionary, OADColorScheme, NSString;

__attribute__((visibility("hidden")))
@interface CMState : NSObject {
@private
	NSMutableDictionary *components;	// 4 = 0x4
	NSMutableDictionary *htmlResource;	// 8 = 0x8
	NSString *mResourceUrlPrefix;	// 12 = 0xc
	OADColorMap *mColorMap;	// 16 = 0x10
	OADColorScheme *mColorScheme;	// 20 = 0x14
	id mResources;	// 24 = 0x18
	int mSrcFormat;	// 28 = 0x1c
	BOOL mIsThumbnail;	// 32 = 0x20
	BOOL mIsOnPhone;	// 33 = 0x21
	int _textLevel;	// 36 = 0x24
}
@property(retain) id colorMap;	// G=0x318f7ac5; S=0x31974f0d; converted property
@property(retain) id colorScheme;	// G=0x318f7ad5; S=0x31974fad; converted property
@property(assign) BOOL isOnPhone;	// G=0x31aa4c6d; S=0x319ba619; converted property
@property(assign) BOOL isThumbnail;	// G=0x318ec4ad; S=0x319ba639; converted property
@property(retain) id resourceUrlPrefix;	// G=0x31a6ea2d; S=0x31aa4c5d; converted property
@property(retain) id resources;	// G=0x318f7ae5; S=0x319e3dc5; converted property
@property(readonly, assign) int textLevel;	// G=0x31aa4c7d; converted property
- (id)init;	// 0x319ba555
// converted property getter: - (id)colorMap;	// 0x318f7ac5
// converted property getter: - (id)colorScheme;	// 0x318f7ad5
- (id)componentByName:(id)name;	// 0x31aa4cb5
- (void)copyFromCMStateWithoutComponents:(id)cmstateWithoutComponents;	// 0x31a6e945
- (void)dealloc;	// 0x318f09b9
- (id)getHtmlResource;	// 0x31a6e9e5
- (BOOL)isOffice12;	// 0x31a1b2c5
// converted property getter: - (BOOL)isOnPhone;	// 0x31aa4c6d
// converted property getter: - (BOOL)isThumbnail;	// 0x318ec4ad
- (void)popTextLevel;	// 0x3199320d
- (void)pushTextLevel;	// 0x3198ff81
// converted property getter: - (id)resourceUrlPrefix;	// 0x31a6ea2d
// converted property getter: - (id)resources;	// 0x318f7ae5
// converted property setter: - (void)setColorMap:(id)map;	// 0x31974f0d
// converted property setter: - (void)setColorScheme:(id)scheme;	// 0x31974fad
- (void)setComponentWithName:(id)name value:(id)value;	// 0x31aa4c8d
- (void)setHtmlResource:(id)resource;	// 0x31a6e9f5
// converted property setter: - (void)setIsOnPhone:(BOOL)phone;	// 0x319ba619
// converted property setter: - (void)setIsThumbnail:(BOOL)thumbnail;	// 0x319ba639
// converted property setter: - (void)setResourceUrlPrefix:(id)prefix;	// 0x31aa4c5d
// converted property setter: - (void)setResources:(id)resources;	// 0x319e3dc5
- (void)setSrcFormat:(int)format;	// 0x319ba629
- (int)sourceFormat;	// 0x318f6255
// converted property getter: - (int)textLevel;	// 0x31aa4c7d
@end
