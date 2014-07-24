/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {
	EDResources *mResources;	// 4 = 0x4
	int mSystemColorID;	// 8 = 0x8
	unsigned mColorIndex;	// 12 = 0xc
	unsigned mThemeIndex;	// 16 = 0x10
	double mTint;	// 20 = 0x14
}
+ (id)colorReferenceWithColor:(id)color resources:(id)resources;	// 0x318750c9
+ (id)colorReferenceWithColorIndex:(unsigned)colorIndex resources:(id)resources;	// 0x3178db7d
+ (id)colorReferenceWithResources:(id)resources;	// 0x3178dc75
+ (id)colorReferenceWithSystemColorID:(int)systemColorID resources:(id)resources;	// 0x3178dc4d
+ (id)colorReferenceWithThemeIndex:(unsigned)themeIndex tint:(double)tint resources:(id)resources;	// 0x31829a8d
- (id)initWithColor:(id)color resources:(id)resources;	// 0x317f0e75
- (id)initWithResources:(id)resources;	// 0x3178dcc1
- (id)color;	// 0x317a96e5
- (unsigned)colorIndex;	// 0x318d1391
- (id)copyWithZone:(NSZone *)zone;	// 0x317f0df1
- (unsigned)hash;	// 0x318d1311
- (BOOL)isEqual:(id)equal;	// 0x317915c9
- (BOOL)isEqualToColorReference:(id)colorReference;	// 0x31791625
- (bool)isValid;	// 0x318d133d
- (int)systemColorID;	// 0x318d1381
- (unsigned)themeIndex;	// 0x3188cf95
- (double)tint;	// 0x318d13a1
@end
