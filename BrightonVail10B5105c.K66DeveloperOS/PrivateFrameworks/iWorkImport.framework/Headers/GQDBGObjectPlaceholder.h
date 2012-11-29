/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDBGPlaceholder.h"
#import "GQDNameMappable.h"

@class GQDDrawable;

@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable> {
	char *mContentType;	// 44 = 0x2c
	GQDDrawable *mDrawable;	// 48 = 0x30
}
+ (const StateSpec *)stateForReading;	// 0x32cd4b11
- (void)dealloc;	// 0x32cd4b1d
- (id)drawable;	// 0x32cd4b89
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x32cd4b99
@end
