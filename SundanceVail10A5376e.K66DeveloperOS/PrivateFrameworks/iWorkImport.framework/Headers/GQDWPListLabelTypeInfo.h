/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library

@class GQDWPTextLabel;

@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable> {
	int mType;	// 4 = 0x4
	GQDWPTextLabel *mLabel;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x35824891
- (void)dealloc;	// 0x35824921
- (id)label;	// 0x3582497d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3582489d
- (int)type;	// 0x3582496d
@end
