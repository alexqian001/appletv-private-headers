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
@property(assign, getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;	// G=0x300ff519; S=0x300ff529; @synthesize
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x300ff471; S=0x300ff485; @synthesize=_authenticationContext
@property(retain) ISDataProvider *dataProvider;	// G=0x300ff4a9; S=0x300ff4bd; @synthesize=_dataProvider
@property(assign) id<ISURLOperationDelegate> delegate;	// @dynamic
@property(retain) id request;	// G=0x300fbddd; S=0x300fbeb9; converted property
@property(copy) SSURLRequestProperties *requestProperties;	// G=0x300fbe59; S=0x300fbf2d; 
@property(retain) NSURLResponse *response;	// G=0x300ff4e1; S=0x300ff4f5; @synthesize=_response
+ (id)copyUserAgent;	// 0x300fba0d
- (id)init;	// 0x300fb8bd
- (id)_accountIdentifier;	// 0x300fd0f5
- (id)_activeURL;	// 0x300fdd69
- (id)_copyAcceptLanguageString;	// 0x300fdd89
- (id)_copyAuthenticationContext;	// 0x300fd19d
- (id)_copyConnectionProperties;	// 0x300fdec5
- (id)_copyQueryStringDictionaryForRedirect:(id)redirect;	// 0x300fdf7d
- (id)_errorWithDefaultStringsForError:(id)error;	// 0x300fe089
- (id)_errorWithDomain:(id)domain code:(int)code;	// 0x300fe145
- (void)_handleFinishedLoading;	// 0x300fd225
- (void)_handleReceivedData:(id)data;	// 0x300fd4f1
- (void)_handleReceivedResponse:(id)response;	// 0x300fd5dd
- (id)_handleRedirectRequest:(id)request response:(id)response;	// 0x300fdb91
- (void)_logRequest:(id)request;	// 0x300fe34d
- (void)_logResponseBody:(id)body;	// 0x300fe4ed
- (id)_requestProperties;	// 0x300fd1c5
- (void)_retry;	// 0x300fe61d
- (void)_run;	// 0x300fe7bd
- (BOOL)_runRequestWithURL:(id)url;	// 0x300fe881
- (id)_sanitizedStringForString:(id)string;	// 0x300feed1
- (id)_sanitizedURLForURL:(id)url;	// 0x300fef51
- (void)_sendContentLengthToDelegate:(long long)delegate;	// 0x300fefe5
- (void)_sendOutputToDelegate:(id)delegate;	// 0x300ff0a9
- (void)_sendRequestToDelegate:(id)delegate;	// 0x300ff125
- (void)_sendResponseToDelegate:(id)delegate;	// 0x300ff17d
- (void)_setActiveURLRequest:(id)request;	// 0x300ff1f9
// declared property setter: - (void)_setShouldSetCookies:(BOOL)_set;	// 0x300ff529
// declared property getter: - (BOOL)_shouldSetCookies;	// 0x300ff519
- (void)_stopConnection;	// 0x300ff23d
- (void)_stopIfCancelled;	// 0x300ff279
- (void)_updateProgress;	// 0x300ff2ad
- (BOOL)_validateContentLength:(long long)length error:(id *)error;	// 0x300ff3cd
// declared property getter: - (id)authenticationContext;	// 0x300ff471
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x300fca85
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x300fcb25
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x300fcb39
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x300fcb4d
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x300fcd81
- (void)connectionDidFinishLoading:(id)connection;	// 0x300fd0e5
// declared property getter: - (id)dataProvider;	// 0x300ff4a9
- (void)dealloc;	// 0x300fb931
- (BOOL)handleRedirectFromDataProvider:(id)dataProvider error:(id *)error;	// 0x300fc2b1
- (void)handleResponse:(id)response;	// 0x300fc425
- (id)newRequestWithURL:(id)url;	// 0x300fc429
// converted property getter: - (id)request;	// 0x300fbddd
// declared property getter: - (id)requestProperties;	// 0x300fbe59
// declared property getter: - (id)response;	// 0x300ff4e1
- (void)run;	// 0x300fbf95
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x300ff485
// declared property setter: - (void)setDataProvider:(id)provider;	// 0x300ff4bd
// converted property setter: - (void)setRequest:(id)request;	// 0x300fbeb9
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x300fbf2d
// declared property setter: - (void)setResponse:(id)response;	// 0x300ff4f5
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;	// 0x300fca79
@end
