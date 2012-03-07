/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "AYGroup.h"
#import "DAVKit-Structs.h"

@class NSMutableSet, NSString, NSMutableDictionary, AYAddress, NSLock, NSMutableArray, NSHTTPCookieStorage;
@protocol DAVAuthStore;

@interface DAVSession : NSObject <AYGroup> {
	NSString *_scheme;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	AYAddress *_address;	// 12 = 0xc
	int _port;	// 16 = 0x10
	BOOL _bypassProxies;	// 20 = 0x14
	BOOL _builtinRedirect;	// 21 = 0x15
	NSMutableDictionary *_permanentRedirects;	// 24 = 0x18
	NSString *_userAgent;	// 28 = 0x1c
	NSString *_acceptEncoding;	// 32 = 0x20
	NSString *_username;	// 36 = 0x24
	NSString *_password;	// 40 = 0x28
	id _passwordDelegate;	// 44 = 0x2c
	unsigned _readTimeOut;	// 48 = 0x30
	id _delegate;	// 52 = 0x34
	NSMutableDictionary *_privateInfos;	// 56 = 0x38
	NSMutableSet *_adapters;	// 60 = 0x3c
	int _bufferSize;	// 64 = 0x40
	NSLock *_sessionLock;	// 68 = 0x44
	int _numWorkerThread;	// 72 = 0x48
	id<DAVAuthStore> _authStore;	// 76 = 0x4c
	id _simpleAuthStore;	// 80 = 0x50
	void *_davReserved;	// 84 = 0x54
	BOOL _useKerberos;	// 88 = 0x58
	BOOL _supportsDigest;	// 89 = 0x59
	BOOL _useAuth;	// 90 = 0x5a
	NSMutableArray *_trustedCerts;	// 92 = 0x5c
	NSLock *_certUILock;	// 96 = 0x60
	BOOL _bypassCheckingServerTrust;	// 100 = 0x64
	id _certificateDelegate;	// 104 = 0x68
	NSHTTPCookieStorage *_cookieStorage;	// 108 = 0x6c
}
@property(readonly, retain) NSString *acceptEncoding;	// G=0x314cfcf9; converted property
@property(assign, getter=isBuiltinRedirect) BOOL builtinRedirect;	// G=0x314cfc39; S=0x314cfc29; converted property
@property(assign) BOOL bypassCheckingServerTrust;	// G=0x314cfd5d; S=0x314cfd6d; converted property
@property(assign, getter=isBypassProxies) BOOL bypassProxies;	// G=0x314cfd19; S=0x314cfd09; converted property
@property(assign) id certificateDelegate;	// G=0x314cfd8d; S=0x314cfd7d; converted property
@property(retain) NSHTTPCookieStorage *cookieStorage;	// G=0x314cfd9d; S=0x314d00a1; converted property
@property(readonly, retain) NSString *host;	// G=0x314cfc09; converted property
@property(assign) BOOL keepAlive;	// G=0x314cfd39; S=0x314cfd29; converted property
@property(retain) id lockOwner;	// G=0x314d01ed; S=0x314d020d; converted property
@property(readonly, retain) NSString *password;	// G=0x314d0281; converted property
@property(readonly, assign) int port;	// G=0x314cfc19; converted property
@property(assign) unsigned readTimeOut;	// G=0x314cfcd9; S=0x314cfcc9; converted property
@property(readonly, retain) NSString *scheme;	// G=0x314cfbf9; converted property
@property(assign) BOOL supportsDigest;	// G=0x314cfded; S=0x314cfddd; converted property
@property(retain) NSMutableArray *trustedCerts;	// G=0x314cfe1d; S=0x314d23f1; converted property
@property(assign) BOOL useAuth;	// G=0x314cfe0d; S=0x314cfdfd; converted property
@property(assign) BOOL useKerberos;	// G=0x314cfdcd; S=0x314cfdbd; converted property
@property(retain) NSString *userAgent;	// G=0x314cfce9; S=0x314d01b1; converted property
@property(readonly, retain) NSString *username;	// G=0x314cfc85; converted property
+ (id)defaultAcceptEncoding;	// 0x314d12a1
+ (id)defaultUserAgent;	// 0x314d1405
+ (void)initialize;	// 0x314d0751
+ (id)sessionWithScheme:(id)scheme host:(id)host port:(int)port;	// 0x314d0705
+ (id)sessionWithURL:(id)url;	// 0x314d0619
+ (void)setDefaultAcceptEncoding:(id)encoding;	// 0x314d134d
+ (void)setDefaultUserAgent:(id)agent;	// 0x314d1551
+ (void)setMaxRedirection:(int)redirection;	// 0x314cfca5
+ (void)setMaxWorkerThreadsPerSession:(int)session;	// 0x314cfcb1
+ (void)setProxiesDelegate:(id)delegate;	// 0x314cfcbd
- (id)initWithScheme:(id)scheme host:(id)host port:(int)port;	// 0x314d0df5
- (id)initWithURL:(id)url;	// 0x314d0561
- (id)URLToURI:(id)uri;	// 0x314d046d
// converted property getter: - (id)acceptEncoding;	// 0x314cfcf9
- (void)addAdapter:(id)adapter;	// 0x314d0429
- (long)bufferSize;	// 0x314cfdad
// converted property getter: - (BOOL)bypassCheckingServerTrust;	// 0x314cfd5d
// converted property getter: - (id)certificateDelegate;	// 0x314cfd8d
- (void)clearAuthChallenge;	// 0x314d0449
// converted property getter: - (id)cookieStorage;	// 0x314cfd9d
- (void)correctBufferSizeWithSize:(long)size;	// 0x314cff7d
- (void)dealloc;	// 0x314d1149
- (id)description;	// 0x314d050d
- (void)finalize;	// 0x314d10fd
- (id)getNewRequestMessage:(CFHTTPMessageRef *)message andStream:(CFReadStreamRef *)stream forRequest:(id)request;	// 0x314d1609
- (BOOL)hasCredentials;	// 0x314d022d
// converted property getter: - (id)host;	// 0x314cfc09
- (id)infoForKey:(id)key;	// 0x314d0381
// converted property getter: - (BOOL)isBuiltinRedirect;	// 0x314cfc39
// converted property getter: - (BOOL)isBypassProxies;	// 0x314cfd19
// converted property getter: - (BOOL)keepAlive;	// 0x314cfd39
- (id)lock;	// 0x314cfc95
// converted property getter: - (id)lockOwner;	// 0x314d01ed
- (void)notifyAdaptersRequestCreated:(id)created;	// 0x314d0045
- (void)notifyAdaptersRequestDestroyed:(id)destroyed;	// 0x314cffe9
- (void)operationHasEnded:(id)ended;	// 0x314d00dd
- (BOOL)operationShouldBeLaunchedNow:(id)operation;	// 0x314d013d
// converted property getter: - (id)password;	// 0x314d0281
// converted property getter: - (int)port;	// 0x314cfc19
// converted property getter: - (unsigned)readTimeOut;	// 0x314cfcd9
- (void)removeTrustedCerts;	// 0x314d0b39
// converted property getter: - (id)scheme;	// 0x314cfbf9
- (void)setAuthStore:(id)store;	// 0x314cfc49
// converted property setter: - (void)setBuiltinRedirect:(BOOL)redirect;	// 0x314cfc29
// converted property setter: - (void)setBypassCheckingServerTrust:(BOOL)trust;	// 0x314cfd6d
// converted property setter: - (void)setBypassProxies:(BOOL)proxies;	// 0x314cfd09
// converted property setter: - (void)setCertificateDelegate:(id)delegate;	// 0x314cfd7d
// converted property setter: - (void)setCookieStorage:(id)storage;	// 0x314d00a1
- (void)setDelegate:(id)delegate;	// 0x314cfc75
- (void)setInfo:(id)info forKey:(id)key;	// 0x314d03a5
// converted property setter: - (void)setKeepAlive:(BOOL)alive;	// 0x314cfd29
// converted property setter: - (void)setLockOwner:(id)owner;	// 0x314d020d
// converted property setter: - (void)setReadTimeOut:(unsigned)anOut;	// 0x314cfcc9
// converted property setter: - (void)setSupportsDigest:(BOOL)digest;	// 0x314cfddd
// converted property setter: - (void)setTrustedCerts:(id)certs;	// 0x314d23f1
// converted property setter: - (void)setUseAuth:(BOOL)auth;	// 0x314cfdfd
// converted property setter: - (void)setUseKerberos:(BOOL)kerberos;	// 0x314cfdbd
// converted property setter: - (void)setUserAgent:(id)agent;	// 0x314d01b1
- (void)setUsername:(id)username andPassword:(id)password;	// 0x314d0309
- (void)setUsername:(id)username andPasswordDelegate:(id)delegate;	// 0x314d02b5
// converted property getter: - (BOOL)supportsDigest;	// 0x314cfded
// converted property getter: - (id)trustedCerts;	// 0x314cfe1d
// converted property getter: - (BOOL)useAuth;	// 0x314cfe0d
// converted property getter: - (BOOL)useKerberos;	// 0x314cfdcd
// converted property getter: - (id)userAgent;	// 0x314cfce9
// converted property getter: - (id)username;	// 0x314cfc85
- (int)workerThreadsCount;	// 0x314cfd4d
@end
