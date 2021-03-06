/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSURLRequest, SSAuthenticationContext, NSURLConnection, NSMutableData, NSCountedSet, SSMutableURLRequestProperties, NSURLResponse, SSURLRequestProperties, ISDataProvider;
@protocol ISURLOperationDelegate;

@interface ISURLOperation : ISOperation {
	NSURLRequest *_activeURLRequest;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	NSURLConnection *_connection;	// 68 = 0x44
	NSMutableData *_dataBuffer;	// 72 = 0x48
	ISDataProvider *_dataProvider;	// 76 = 0x4c
	int _networkRetryCount;	// 80 = 0x50
	NSCountedSet *_redirectURLs;	// 84 = 0x54
	SSMutableURLRequestProperties *_requestProperties;	// 88 = 0x58
	NSURLResponse *_response;	// 92 = 0x5c
	BOOL _shouldSetCookies;	// 96 = 0x60
}
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x35538519; S=0x35538529; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x35538471; S=0x35538485; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x355384a9; S=0x355384bd; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x35534ddd; S=0x35534eb9; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x35534e59; S=0x35534f2d; 
@property(retain) NSURLResponse *response;	// G=0x355384e1; S=0x355384f5; @synthesize=_response
+ (id)copyUserAgent;	// 0x35534a0d
- (id)init;	// 0x355348bd
- (id)_accountIdentifier;	// 0x355360f5
- (id)_activeURL;	// 0x35536d69
- (id)_copyAcceptLanguageString;	// 0x35536d89
- (id)_copyAuthenticationContext;	// 0x3553619d
- (id)_copyConnectionProperties;	// 0x35536ec5
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x35536f7d
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x35537089
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x35537145
- (void)_handleFinishedLoading;	// 0x35536225
- (void)_handleReceivedData:(id)data;	// 0x355364f1
- (void)_handleReceivedResponse:(id)response;	// 0x355365dd
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x35536b91
- (void)_logRequest:(id)request;	// 0x3553734d
- (void)_logResponseBody:(id)body;	// 0x355374ed
- (id)_requestProperties;	// 0x355361c5
- (void)_retry;	// 0x3553761d
- (void)_run;	// 0x355377bd
- (BOOL)_runRequestWithURL:(id)url;	// 0x35537881
- (id)_sanitizedStringForString:(id)string;	// 0x35537ed1
- (id)_sanitizedURLForURL:(id)url;	// 0x35537f51
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x35537fe5
- (void)_sendOutputToDelegate:(id)delegate;	// 0x355380a9
- (void)_sendRequestToDelegate:(id)delegate;	// 0x35538125
- (void)_sendResponseToDelegate:(id)delegate;	// 0x3553817d
- (void)_setActiveURLRequest:(id)request;	// 0x355381f9
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x35538529
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x35538519
- (void)_stopConnection;	// 0x3553823d
- (void)_stopIfCancelled;	// 0x35538279
- (void)_updateProgress;	// 0x355382ad
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x355383cd
// declared property getter: - (id)authenticationContext;	// 0x35538471
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x35535a85
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x35535b25
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x35535b39
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x35535b4d
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x35535d81
- (void)connectionDidFinishLoading:(id)connection;	// 0x355360e5
// declared property getter: - (id)dataProvider;	// 0x355384a9
- (void)dealloc;	// 0x35534931
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider error:(id *)error;	// 0x355352b1
- (void)handleResponse:(id)response;	// 0x35535425
- (id)newRequestWithURL:(id)url;	// 0x35535429
// converted property getter: - (id)request;	// 0x35534ddd
// declared property getter: - (id)requestProperties;	// 0x35534e59
// declared property getter: - (id)response;	// 0x355384e1
- (void)run;	// 0x35534f95
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x35538485
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x355384bd
// converted property setter: - (void)setRequest:(id)request;	// 0x35534eb9
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x35534f2d
// declared property setter: - (void)setResponse:(id)response;	// 0x355384f5
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x35535a79
@end

