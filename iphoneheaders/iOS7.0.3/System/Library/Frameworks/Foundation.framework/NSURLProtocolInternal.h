/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:00 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NSURLProtocolClient;
@class , NSURLRequest, NSCachedURLResponse, NSLock;

@interface NSURLProtocolInternal : NSObject {

	<NSURLProtocolClient>* client;
	NSURLRequest* request;
	NSCachedURLResponse* cachedResponse;
	NSLock* mutex;

}
-(void)dealloc;
-(id)init;
@end
