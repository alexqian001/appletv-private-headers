/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "NSURLConnectionDelegate.h"
#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSData, NSURLConnection;

@interface YTDeviceAuthenticator : NSObject <NSURLConnectionDelegate> {
	NSURLConnection *_connection;	// 4 = 0x4
	NSMutableData *_responseData;	// 8 = 0x8
	NSString *_token;	// 12 = 0xc
	double _timeTokenGranted;	// 16 = 0x10
	int _phase;	// 24 = 0x18
	NSData *_r1;	// 28 = 0x1c
	NSData *_r1Hash;	// 32 = 0x20
	NSData *_r2;	// 36 = 0x24
	NSData *_hmac;	// 40 = 0x28
}
@property(readonly, retain) NSString *token;	// G=0x35141e91; converted property
+ (id)sharedAuthenticator;	// 0x351413d5
- (BOOL)_authenticate1;	// 0x35141529
- (BOOL)_authenticate2;	// 0x351417bd
- (void)_clearNonces;	// 0x35141c81
- (void)_connectionDidEnd;	// 0x35142019
- (void)_copyCertificateData:(id *)data privateKey:(SecKey **)key;	// 0x3514141d
- (void)_failWithErrorCode:(int)errorCode;	// 0x35141d01
- (void)_loadStatusChanged;	// 0x35141391
- (void)_succeeded;	// 0x35141fb1
- (void)authenticate;	// 0x35141de1
- (BOOL)canAuthenticate;	// 0x351414e1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x351423a9
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35141f6d
- (void)connectionDidFinishLoading:(id)connection;	// 0x35142069
- (void)invalidateToken;	// 0x35141f29
- (BOOL)isAuthenticating;	// 0x35141e79
// converted property getter: - (id)token;	// 0x35141e91
@end
