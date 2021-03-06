/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPCollection.h"

@class NSString;

@interface SAMPPodcastCollection : SAMPCollection {
}
@property(copy, nonatomic) NSString *artist;	// G=0x34261c55; S=0x34261c71; 
@property(copy, nonatomic) NSString *sortArtist;	// G=0x34261cc1; S=0x34261cdd; 
+ (id)podcastCollection;	// 0x34261bc5
+ (id)podcastCollectionWithDictionary:(id)dictionary context:(id)context;	// 0x34261c09
// declared property getter: - (id)artist;	// 0x34261c55
- (id)encodedClassName;	// 0x34261bb9
- (id)groupIdentifier;	// 0x34261ba9
// declared property setter: - (void)setArtist:(id)artist;	// 0x34261c71
// declared property setter: - (void)setSortArtist:(id)artist;	// 0x34261cdd
// declared property getter: - (id)sortArtist;	// 0x34261cc1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x34261d2d
@end

