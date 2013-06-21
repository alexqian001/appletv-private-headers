/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADTextListStyle : NSObject {
	NSMutableArray *mParagraphProperties;	// 4 = 0x4
}
- (id)init;	// 0x34819111
- (id)initWithDefaults;	// 0x348029a5
- (void)dealloc;	// 0x3481c825
- (id)defaultProperties;	// 0x349355e5
- (void)flatten;	// 0x34a53521
- (void)overrideWithTextStyle:(id)textStyle;	// 0x34871755
- (id)propertiesForListLevel:(unsigned)listLevel;	// 0x34812e2d
- (void)removeUnnecessaryOverrides;	// 0x34a53561
- (void)setParentTextListStyle:(id)style;	// 0x3493873d
- (void)setPropertiesForListLevel:(unsigned)listLevel properties:(id)properties;	// 0x34a53501
@end
