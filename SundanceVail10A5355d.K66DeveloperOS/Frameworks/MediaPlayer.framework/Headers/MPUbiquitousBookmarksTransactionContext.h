/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MZUniversalPlaybackPositionTransactionContext.h"
#import <NSObject.h> // Unknown library

@class NSString, MPMediaLibrary, MPMediaQuery;

@interface MPUbiquitousBookmarksTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext> {
	MPMediaLibrary *_mediaLibrary;	// 4 = 0x4
	NSString *_lastSyncedDomainVersion;	// 8 = 0x8
	unsigned long long _lastSyncedEntityRevision;	// 12 = 0xc
	unsigned long long _transactionEntityRevision;	// 20 = 0x14
	MPMediaQuery *_itemsQuery;	// 28 = 0x1c
}
@property(retain, nonatomic) MPMediaQuery *itemsQuery;	// G=0x3379896d; S=0x3379897d; @synthesize=_itemsQuery
@property(copy, nonatomic) NSString *lastSyncedDomainVersion;	// G=0x337988f1; S=0x33798905; @synthesize=_lastSyncedDomainVersion
@property(assign, nonatomic) unsigned long long lastSyncedEntityRevision;	// G=0x33798915; S=0x3379892d; @synthesize=_lastSyncedEntityRevision
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x337988d1; S=0x337988e1; @synthesize=_mediaLibrary
@property(assign, nonatomic) unsigned long long transactionEntityRevision;	// G=0x33798941; S=0x33798959; @synthesize=_transactionEntityRevision
- (void)dealloc;	// 0x3379879d
- (id)description;	// 0x33798815
// declared property getter: - (id)itemsQuery;	// 0x3379896d
// declared property getter: - (id)lastSyncedDomainVersion;	// 0x337988f1
// declared property getter: - (unsigned long long)lastSyncedEntityRevision;	// 0x33798915
// declared property getter: - (id)mediaLibrary;	// 0x337988d1
// declared property setter: - (void)setItemsQuery:(id)query;	// 0x3379897d
// declared property setter: - (void)setLastSyncedDomainVersion:(id)version;	// 0x33798905
// declared property setter: - (void)setLastSyncedEntityRevision:(unsigned long long)revision;	// 0x3379892d
// declared property setter: - (void)setMediaLibrary:(id)library;	// 0x337988e1
// declared property setter: - (void)setTransactionEntityRevision:(unsigned long long)revision;	// 0x33798959
// declared property getter: - (unsigned long long)transactionEntityRevision;	// 0x33798941
@end

