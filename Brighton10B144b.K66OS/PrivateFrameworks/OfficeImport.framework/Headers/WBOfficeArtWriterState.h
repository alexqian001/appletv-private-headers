/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABWriterState.h"

@class TSUPointerKeyDictionary;

@interface WBOfficeArtWriterState : OABWriterState {
	TSUPointerKeyDictionary *mZIndicesInProgress;	// 36 = 0x24
}
- (id)initWithClient:(id)client;	// 0x34a8bef1
- (void)dealloc;	// 0x34a8bf5d
- (unsigned)indexForChild:(id)child parentContainer:(id)container;	// 0x34a8bfa9
@end

