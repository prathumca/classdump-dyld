/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/XPCServices/IMDMessageServicesAgent.xpc/IMDMessageServicesAgent
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <IMDMessageServicesAgent/IMDMessageServicesAgent-Structs.h>
@class NSString;

@interface IMDMSAAttachment : NSObject {

	NSString* _GUID;
	NSString* _path;
	NSString* _UTIType;
	NSString* _mimeType;
	BOOL _isOutgoing;

}

@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoing;                         //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,readonly) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * UTIType;                      //@synthesize UTIType=_UTIType - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                     //@synthesize mimeType=_mimeType - In the implementation block
-(id)initWithAttachment:(IMDAttachmentRecordStructRef)arg1 ;
-(void)dealloc;
-(id)path;
-(id)mimeType;
-(BOOL)isOutgoing;
-(id)UTIType;
-(id)GUID;
@end
