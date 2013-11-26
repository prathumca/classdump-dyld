/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@protocol GEOVoltaireMultiTileDownloaderDelegate;
@class GEOTileKeyList, NSURL, NSMutableSet, NSURLConnection, GEONetworkDataReader, NSString, NSData, , GEOTileKeyMap;

@interface GEOVoltaireMultiTileDownloader : NSObject <NSURLConnectionDelegate> {

	GEOTileKeyList* _keyList;
	GEOTileKeyList* _requiresLocalization;
	GEOTileKeyList* _receivedKeys;
	NSURL* _requestURL;
	BOOL _useStatusCodes;
	NSMutableSet* _errorCodes;
	NSURLConnection* _connection;
	GEONetworkDataReader* _reader;
	NSString* _sharedPrefix;
	NSString* _userAgent;
	NSData* _auditToken;
	<GEOVoltaireMultiTileDownloaderDelegate>* _delegate;
	unsigned short _providerID;
	GEOTileKeyMap* _baseTilesWaitingForLocalized;
	GEOTileKeyMap* _localizedTilesWaitingForBase;
	NSString* _postString;
	BOOL _requireWiFi;
	int _attempts;
	double _startTime;
	double _timeout;

}

@property (nonatomic,retain) NSString * userAgent;                                             //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSURL * requestURL;                                             //@synthesize requestURL=_requestURL - In the implementation block
@property (assign,nonatomic) BOOL useStatusCodes;                                              //@synthesize useStatusCodes=_useStatusCodes - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                                 //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (assign,nonatomic) <GEOVoltaireMultiTileDownloaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_cancelWithError:(id)arg1 ;
-(id)auditToken;
-(void)setUserAgent:(id)arg1 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(void)setAuditToken:(id)arg1 ;
-(double)elapsed;
-(BOOL)requireWiFi;
-(BOOL)useStatusCodes;
-(id)initWithURL:(id)arg1 keyList:(id)arg2 ;
-(void)setUseStatusCodes:(BOOL)arg1 ;
-(id)requestURL;
-(id)_localizationURLIfNecessaryForTileKey:(GEOTileKey*)arg1 ;
-(void)_cleanupConnection;
-(id)_localizationURLForTileKey:(GEOTileKey*)arg1 ;
-(GEOTileKey)_tileKeyForURL:(id)arg1 edition:(unsigned*)arg2 isLocalized:(BOOL*)arg3 ;
-(id)_mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
-(void)logDownloadDetails;
-(void)_tryParseTiles;
-(id)_urlForTileKey:(GEOTileKey*)arg1 ;
-(id)userAgent;
-(void)_failWithError:(id)arg1 ;
@end
