/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASRecurrence.h"
#import "NSCoding.h"

@class ASToDo, NSNumber, NSDate;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {
	ASToDo *_parentToDo;	// 84 = 0x54
	NSDate *_startTime;	// 88 = 0x58
	NSNumber *_regenerate;	// 92 = 0x5c
	NSNumber *_deadOccur;	// 96 = 0x60
}
@property(retain) NSNumber *deadOccur;	// G=0x30955cd5; S=0x30955ce9; @synthesize=_deadOccur
@property(retain) NSNumber *regenerate;	// G=0x30955cb1; S=0x30955cc5; @synthesize=_regenerate
@property(retain) NSDate *startTime;	// G=0x30955c8d; S=0x30955ca1; @synthesize=_startTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x309546d9
+ (id)asParseRules;	// 0x30954a65
+ (BOOL)frontingBasicTypes;	// 0x309547d5
+ (BOOL)notifyOfUnknownTokens;	// 0x30954829
+ (BOOL)parsingLeafNode;	// 0x3095472d
+ (BOOL)parsingWithSubItems;	// 0x30954781
- (id)initWithCalRecurrence:(void *)calRecurrence parentToDo:(id)aDo;	// 0x3095487d
- (id)initWithCoder:(id)coder;	// 0x30955a0d
- (BOOL)_requiresParentEvent;	// 0x30955185
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x30955885
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x3095578d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x30955385
// declared property getter: - (id)deadOccur;	// 0x30955cd5
- (void)dealloc;	// 0x30955995
- (void)encodeWithCoder:(id)coder;	// 0x30955b61
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x30955189
// declared property getter: - (id)regenerate;	// 0x30955cb1
- (void)saveToCalendarWithParentASToDo:(id)aDo existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x30954991
// declared property setter: - (void)setDeadOccur:(id)occur;	// 0x30955ce9
// declared property setter: - (void)setRegenerate:(id)regenerate;	// 0x30955cc5
// declared property setter: - (void)setStartTime:(id)time;	// 0x30955ca1
- (void)setStartTimeString:(id)string;	// 0x30955715
- (void)setUntilString:(id)string;	// 0x30955751
// declared property getter: - (id)startTime;	// 0x30955c8d
@end

