/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSURLConnectionDelegate.h"
#import <NSObject.h> // Unknown library
#import "GEOSupportedTileSetsServerProxy.h"

@class NSMutableData, NSURLConnection, NSString;
@protocol GEOSupportedTileSetsServerProxyDelegate;

@interface GEOSupportedTileSetsServerLocalProxy : NSObject <GEOSupportedTileSetsServerProxy, NSURLConnectionDelegate> {
	id<GEOSupportedTileSetsServerProxyDelegate> _delegate;	// 4 = 0x4
	NSURLConnection *_connection;	// 8 = 0x8
	NSMutableData *_responseData;	// 12 = 0xc
	NSString *_responseETag;	// 16 = 0x10
}
@property(assign, nonatomic) id<GEOSupportedTileSetsServerProxyDelegate> delegate;	// G=0x35f4455d; S=0x35f4456d; @synthesize=_delegate
- (void)_cancelConnection;	// 0x35f43be9
- (void)_cleanupConnection;	// 0x35f43c25
- (void)_connectionDidFail;	// 0x35f43c91
- (void)_writeDocumentToDisk:(id)disk;	// 0x35f43cd9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x35f4452d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35f442f9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x35f440b5
- (void)connectionDidFinishLoading:(id)connection;	// 0x35f4433d
- (void)dealloc;	// 0x35f4399d
// declared property getter: - (id)delegate;	// 0x35f4455d
- (id)documentDataFromDisk;	// 0x35f43a29
- (id)documentURL;	// 0x35f439dd
- (void)loadAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x35f43d95
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35f4456d
- (void)updateAttributionBadgeDataHiDPI:(BOOL)dpi isIPad:(BOOL)pad handler:(id)handler;	// 0x35f43df5
- (void)updateDocument;	// 0x35f43a55
@end

