/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsSnippet.h"

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet {
}
@property(copy, nonatomic) NSArray *columns;	// G=0x325410bd; S=0x325410d9; 
@property(copy, nonatomic) NSArray *entities;	// G=0x32541129; S=0x325411a5; 
@property(copy, nonatomic) NSArray *selectedEntities;	// G=0x3254120d; S=0x32541289; 
@property(assign, nonatomic) BOOL showCardinalPositions;	// G=0x325412f1; S=0x32541369; 
+ (id)standingsSnippet;	// 0x3254102d
+ (id)standingsSnippetWithDictionary:(id)dictionary context:(id)context;	// 0x32541071
// declared property getter: - (id)columns;	// 0x325410bd
- (id)encodedClassName;	// 0x32541021
// declared property getter: - (id)entities;	// 0x32541129
- (id)groupIdentifier;	// 0x32541011
// declared property getter: - (id)selectedEntities;	// 0x3254120d
// declared property setter: - (void)setColumns:(id)columns;	// 0x325410d9
// declared property setter: - (void)setEntities:(id)entities;	// 0x325411a5
// declared property setter: - (void)setSelectedEntities:(id)entities;	// 0x32541289
// declared property setter: - (void)setShowCardinalPositions:(BOOL)positions;	// 0x32541369
// declared property getter: - (BOOL)showCardinalPositions;	// 0x325412f1
@end

