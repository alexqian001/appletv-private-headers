/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataType, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MUSICDataClientTopShelfHelper : XXUnknownSuperclass {
	ATVDataQuery *_dateAddedQuery;	// 4 = 0x4
	ATVDataQuery *_datePlayedQuery;	// 8 = 0x8
	ATVDataQuery *_albumQuery;	// 12 = 0xc
	BOOL _queryResultsParseable;	// 16 = 0x10
	ATVDataType *_mediaType;	// 20 = 0x14
	long _numOfRentals;	// 24 = 0x18
	id _queryCompletionHandler;	// 28 = 0x1c
	id _albumQueryCompletionHandler;	// 32 = 0x20
}
@property(copy, nonatomic) id _albumQueryCompletionHandler;	// G=0x7b1e5; S=0x7b1f9; @synthesize
@property(copy, nonatomic) id _queryCompletionHandler;	// G=0x7b1c1; S=0x7b1d5; @synthesize
@property(readonly, assign, nonatomic) long numOfRentals;	// G=0x7b1b1; @synthesize=_numOfRentals
- (void).cxx_destruct;	// 0x7b209
- (void)_albumQueryComplete;	// 0x7bf29
// declared property getter: - (id)_albumQueryCompletionHandler;	// 0x7b1e5
- (void)_cancelQueries;	// 0x7bf9d
- (void)_itemsQueryComplete;	// 0x7b8b5
// declared property getter: - (id)_queryCompletionHandler;	// 0x7b1c1
- (void)_submitHomeShareDateAddedQuery:(id)query mediaType:(id)type;	// 0x7b5f5
- (void)_submitHomeShareDatePlayedQuery:(id)query mediaType:(id)type;	// 0x7b771
- (void)dealloc;	// 0x7aec5
- (id)newBaseQuery:(id)query;	// 0x7b28d
// declared property getter: - (long)numOfRentals;	// 0x7b1b1
- (void)queryAlbumWithAlbumID:(id)albumID dataClient:(id)client completionHandler:(id)handler;	// 0x7b005
- (void)queryDataWithMediaType:(id)mediaType dataClient:(id)client completionHandler:(id)handler;	// 0x7af2d
// declared property setter: - (void)set_albumQueryCompletionHandler:(id)handler;	// 0x7b1f9
// declared property setter: - (void)set_queryCompletionHandler:(id)handler;	// 0x7b1d5
@end

