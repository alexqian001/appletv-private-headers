/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataQuery, ATVDataType;

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
@property(copy, nonatomic) id _albumQueryCompletionHandler;	// G=0x2b7c61; S=0x2b7c75; @synthesize
@property(copy, nonatomic) id _queryCompletionHandler;	// G=0x2b7c3d; S=0x2b7c51; @synthesize
@property(readonly, assign, nonatomic) long numOfRentals;	// G=0x2b7c2d; @synthesize=_numOfRentals
- (void).cxx_destruct;	// 0x2b7c85
- (void)_albumQueryComplete;	// 0x2b88d5
// declared property getter: - (id)_albumQueryCompletionHandler;	// 0x2b7c61
- (void)_cancelQueries;	// 0x2b8949
- (void)_itemsQueryComplete;	// 0x2b8339
// declared property getter: - (id)_queryCompletionHandler;	// 0x2b7c3d
- (void)_submitHomeShareDateAddedQuery:(id)query mediaType:(id)type;	// 0x2b8071
- (void)_submitHomeShareDatePlayedQuery:(id)query mediaType:(id)type;	// 0x2b81f1
- (void)dealloc;	// 0x2b7941
- (id)newBaseQuery:(id)query;	// 0x2b7d09
// declared property getter: - (long)numOfRentals;	// 0x2b7c2d
- (void)queryAlbumWithAlbumID:(id)albumID dataClient:(id)client completionHandler:(id)handler;	// 0x2b7a81
- (void)queryDataWithMediaType:(id)mediaType dataClient:(id)client completionHandler:(id)handler;	// 0x2b79a9
// declared property setter: - (void)set_albumQueryCompletionHandler:(id)handler;	// 0x2b7c75
// declared property setter: - (void)set_queryCompletionHandler:(id)handler;	// 0x2b7c51
@end
