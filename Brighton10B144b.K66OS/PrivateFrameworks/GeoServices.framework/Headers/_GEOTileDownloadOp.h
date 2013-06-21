/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLConnection, NSString, GEOSimpleTileRequester, NSURL, NSMutableData;

__attribute__((visibility("hidden")))
@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {
	NSURL *_url;	// 4 = 0x4
	BOOL _requireWiFi;	// 8 = 0x8
	NSMutableData *_data;	// 12 = 0xc
	NSURLConnection *_conn;	// 16 = 0x10
	GEOTileKey _key;	// 20 = 0x14
	BOOL _finished;	// 36 = 0x24
	NSString *_editionHeader;	// 40 = 0x28
	unsigned _tileEdition;	// 44 = 0x2c
	NSString *_userAgent;	// 48 = 0x30
	BOOL _useCookies;	// 52 = 0x34
	_GEOTileDownloadOp *_baseTile;	// 56 = 0x38
	_GEOTileDownloadOp *_localizationTile;	// 60 = 0x3c
	unsigned _contentLength;	// 64 = 0x40
	GEOSimpleTileRequester *_delegate;	// 68 = 0x44
	BOOL _gotData;	// 72 = 0x48
	_GEOTileDownloadOp *localizationTile;	// 76 = 0x4c
}
@property(retain, nonatomic) _GEOTileDownloadOp *baseTile;	// G=0x33f762e9; S=0x33f762f9; @synthesize=_baseTile
@property(retain, nonatomic) NSURLConnection *conn;	// G=0x33f7623d; S=0x33f7624d; @synthesize=_conn
@property(readonly, assign, nonatomic) unsigned contentLength;	// G=0x33f76329; @synthesize=_contentLength
@property(retain, nonatomic) NSMutableData *data;	// G=0x33f7621d; S=0x33f7622d; @synthesize=_data
@property(assign, nonatomic) GEOSimpleTileRequester *delegate;	// G=0x33f76349; S=0x33f76359; @synthesize=_delegate
@property(retain, nonatomic) NSString *editionHeader;	// G=0x33f7625d; S=0x33f7626d; @synthesize=_editionHeader
@property(readonly, assign, nonatomic) BOOL finished;	// G=0x33f76339; @synthesize=_finished
@property(assign) GEOTileKey key;	// G=0x33f761a1; S=0x33f761c5; @synthesize=_key
@property(retain, nonatomic) _GEOTileDownloadOp *localizationTile;	// G=0x33f76309; S=0x33f76319; @synthesize
@property(assign, nonatomic) BOOL requireWiFi;	// G=0x33f76369; S=0x33f76379; @synthesize=_requireWiFi
@property(assign) unsigned tileEdition;	// G=0x33f7627d; S=0x33f76291; @synthesize=_tileEdition
@property(retain, nonatomic) NSURL *url;	// G=0x33f76181; S=0x33f76191; @synthesize=_url
@property(assign, nonatomic) BOOL useCookies;	// G=0x33f762c9; S=0x33f762d9; @synthesize=_useCookies
@property(retain, nonatomic) NSString *userAgent;	// G=0x33f762a9; S=0x33f762b9; @synthesize=_userAgent
// declared property getter: - (id)baseTile;	// 0x33f762e9
- (void)cancel;	// 0x33f75b7d
// declared property getter: - (id)conn;	// 0x33f7623d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33f76035
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33f75e4d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33f75bb9
- (void)connectionDidFinishLoading:(id)connection;	// 0x33f75e9d
// declared property getter: - (unsigned)contentLength;	// 0x33f76329
// declared property getter: - (id)data;	// 0x33f7621d
- (void)dealloc;	// 0x33f757d9
// declared property getter: - (id)delegate;	// 0x33f76349
- (id)description;	// 0x33f758a9
// declared property getter: - (id)editionHeader;	// 0x33f7625d
// declared property getter: - (BOOL)finished;	// 0x33f76339
// declared property getter: - (GEOTileKey)key;	// 0x33f761a1
// declared property getter: - (id)localizationTile;	// 0x33f76309
// declared property getter: - (BOOL)requireWiFi;	// 0x33f76369
// declared property setter: - (void)setBaseTile:(id)tile;	// 0x33f762f9
// declared property setter: - (void)setConn:(id)conn;	// 0x33f7624d
// declared property setter: - (void)setData:(id)data;	// 0x33f7622d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33f76359
// declared property setter: - (void)setEditionHeader:(id)header;	// 0x33f7626d
// declared property setter: - (void)setKey:(GEOTileKey)key;	// 0x33f761c5
// declared property setter: - (void)setLocalizationTile:(id)tile;	// 0x33f76319
// declared property setter: - (void)setRequireWiFi:(BOOL)fi;	// 0x33f76379
// declared property setter: - (void)setTileEdition:(unsigned)edition;	// 0x33f76291
// declared property setter: - (void)setUrl:(id)url;	// 0x33f76191
// declared property setter: - (void)setUseCookies:(BOOL)cookies;	// 0x33f762d9
// declared property setter: - (void)setUserAgent:(id)agent;	// 0x33f762b9
- (void)start;	// 0x33f7594d
// declared property getter: - (unsigned)tileEdition;	// 0x33f7627d
// declared property getter: - (id)url;	// 0x33f76181
// declared property getter: - (BOOL)useCookies;	// 0x33f762c9
// declared property getter: - (id)userAgent;	// 0x33f762a9
@end
