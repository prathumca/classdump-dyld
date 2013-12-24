/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSData, NSString;

@interface HSNowPlayingArtworkResponse : HSResponse {

	NSData* _artworkData;
	NSString* _artworkMIMEType;

}

@property (nonatomic,retain) NSData * artworkData;                    //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,retain) NSString * artworkMIMEType;              //@synthesize artworkMIMEType=_artworkMIMEType - In the implementation block
-(id)artworkMIMEType;
-(void)dealloc;
-(void)setArtworkMIMEType:(id)arg1 ;
-(id)artworkData;
-(void)setArtworkData:(id)arg1 ;
@end
