/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCData : NSData {

	NSObject<OS_xpc_object>* _data;

}
-(void)dealloc;
-(id)debugDescription;
-(unsigned)length;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithXPCData:(id)arg1 ;
@end
