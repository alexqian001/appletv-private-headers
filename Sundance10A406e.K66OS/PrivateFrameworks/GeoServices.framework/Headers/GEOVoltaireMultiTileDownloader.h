/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library

@class GEOTileKeyList, GEONetworkDataReader, NSMutableSet, NSURL, NSURLConnection, GEOTileKeyMap, NSString;
@protocol GEOVoltaireMultiTileDownloaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate> {
	GEOTileKeyList *_keyList;	// 4 = 0x4
	GEOTileKeyList *_requiresLocalization;	// 8 = 0x8
	GEOTileKeyList *_receivedKeys;	// 12 = 0xc
	NSURL *_requestURL;	// 16 = 0x10
	BOOL _useStatusCodes;	// 20 = 0x14
	NSMutableSet *_errorCodes;	// 24 = 0x18
@private
	NSURLConnection *_connection;	// 28 = 0x1c
@protected
	GEONetworkDataReader *_reader;	// 32 = 0x20
	NSString *_sharedPrefix;	// 36 = 0x24
	NSString *_userAgent;	// 40 = 0x28
	id<GEOVoltaireMultiTileDownloaderDelegate> _delegate;	// 44 = 0x2c
	unsigned short _providerID;	// 48 = 0x30
	GEOTileKeyMap *_baseTilesWaitingForLocalized;	// 52 = 0x34
	GEOTileKeyMap *_localizedTilesWaitingForBase;	// 56 = 0x38
	NSString *_postString;	// 60 = 0x3c
}
@property(assign, nonatomic) id<GEOVoltaireMultiTileDownloaderDelegate> delegate;	// G=0x379870e5; S=0x379870f5; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *requestURL;	// G=0x37987125; @synthesize=_requestURL
@property(assign, nonatomic) BOOL useStatusCodes;	// G=0x37987135; S=0x37987145; @synthesize=_useStatusCodes
@property(retain, nonatomic) NSString *userAgent;	// G=0x37987105; S=0x37987115; @synthesize=_userAgent
- (id)initWithURL:(id)url keyList:(id)list;	// 0x37985691
- (void)_cancelWithError:(id)error;	// 0x37985e49
- (void)_cleanupConnection;	// 0x37985d7d
- (void)_failWithError:(id)error;	// 0x37985e15
- (id)_localizationURLForTileKey:(GEOTileKey *)tileKey;	// 0x37985ea1
- (id)_localizationURLIfNecessaryForTileKey:(GEOTileKey *)tileKey;	// 0x37985fe9
- (id)_mergeBaseTile:(id)tile withLocalizationTile:(id)localizationTile;	// 0x37986495
- (GEOTileKey)_tileKeyForURL:(id)url edition:(unsigned *)edition isLocalized:(BOOL *)localized;	// 0x3798616d
- (void)_tryParseTiles;	// 0x3798649d
- (id)_urlForTileKey:(GEOTileKey *)tileKey;	// 0x3798603d
- (void)cancel;	// 0x37985d41
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x37986f99
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x37986b85
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x37986989
- (void)connectionDidFinishLoading:(id)connection;	// 0x37986c31
- (void)dealloc;	// 0x3798572d
// declared property getter: - (id)delegate;	// 0x379870e5
- (void)logDownloadDetails;	// 0x37987001
// declared property getter: - (id)requestURL;	// 0x37987125
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x379870f5
// declared property setter: - (void)setUseStatusCodes:(BOOL)codes;	// 0x37987145
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x37987115
- (void)start;	// 0x37985819
// declared property getter: - (BOOL)useStatusCodes;	// 0x37987135
// declared property getter: - (id)userAgent;	// 0x37987105
@end
