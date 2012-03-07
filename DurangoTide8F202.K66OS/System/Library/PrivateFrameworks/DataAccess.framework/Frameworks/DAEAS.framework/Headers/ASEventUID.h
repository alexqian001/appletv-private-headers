/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "DAEAS-Structs.h"
#import "ASParsingLeafNode.h"

@class NSString, NSDate;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {
	NSDate *_exceptionDate;	// 4 = 0x4
	NSString *_uidWithoutExceptionDate;	// 8 = 0x8
	BOOL _isOutlookCreatedUid;	// 12 = 0xc
}
@property(retain) NSDate *exceptionDate;	// G=0x32ed59d9; S=0x32ed58b9; converted property
@property(readonly, retain) NSString *uidWithoutExceptionDate;	// G=0x32ed5a4d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x32ed5e25
+ (BOOL)expectsContent;	// 0x32ed58b5
+ (BOOL)frontingBasicTypes;	// 0x32ed5d4d
+ (BOOL)notifyOfUnknownTokens;	// 0x32ed5d05
+ (BOOL)parsingLeafNode;	// 0x32ed5ddd
+ (BOOL)parsingWithSubItems;	// 0x32ed5d95
- (id)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;	// 0x32ed6165
- (id)initWithCalFrameworkString:(id)calFrameworkString;	// 0x32ed6419
- (id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)outlookUUIDString withTimeZone:(id)timeZone;	// 0x32ed5bc5
- (id)copyWithZone:(NSZone *)zone;	// 0x32ed5b7d
- (void)dealloc;	// 0x32ed6311
- (id)description;	// 0x32ed636d
// converted property getter: - (id)exceptionDate;	// 0x32ed59d9
- (int)parsingState;	// 0x32ed58b1
- (id)recurrenceIDForResponseEmail;	// 0x32ed5a7d
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x32ed58b9
- (id)uidForActiveSyncWithTimeZone:(id)timeZone;	// 0x32ed5a09
- (id)uidForCalFramework;	// 0x32ed5ae5
- (id)uidForResponseEmailWithTimeZone:(id)timeZone;	// 0x32ed5aa1
- (id)uidFromGlobalObjId:(id)globalObjId outIsOutlookCreatedUid:(BOOL *)uid;	// 0x32ed5e6d
// converted property getter: - (id)uidWithoutExceptionDate;	// 0x32ed5a4d
@end
