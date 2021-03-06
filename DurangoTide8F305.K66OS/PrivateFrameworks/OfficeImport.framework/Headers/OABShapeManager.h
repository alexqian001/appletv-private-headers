/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABShapeBaseManager.h"
#import "OABPropertiesManager.h"


__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
@private
	EshShape *mShape;	// 20 = 0x14
}
- (id)initWithShape:(EshShape *)shape;	// 0x344cd45d
- (id)initWithShape:(EshShape *)shape masterShape:(EshShape *)shape2;	// 0x3443bad1
- (BOOL)hidden;	// 0x3444419d
- (BOOL)isFillOK;	// 0x34444611
- (BOOL)isFilled;	// 0x3443c48d
- (BOOL)isShadowOK;	// 0x3443e989
- (BOOL)isShadowed;	// 0x3443e8d1
- (BOOL)isStrokeOK;	// 0x34445c81
- (BOOL)isStroked;	// 0x3443dcc5
- (BOOL)isTextPath;	// 0x3443c5e9
- (BOOL)textPathBold;	// 0x344c3d85
- (id)textPathFontFamily;	// 0x344c3c79
- (long)textPathFontSize;	// 0x344c3d19
- (BOOL)textPathItalic;	// 0x344c3df5
- (BOOL)textPathSmallcaps;	// 0x344c3e65
- (BOOL)textPathStrikethrough;	// 0x345e71d5
- (int)textPathTextAlignment;	// 0x344c3799
- (BOOL)textPathUnderline;	// 0x345e7221
- (id)textPathUnicodeString;	// 0x344c3825
@end

