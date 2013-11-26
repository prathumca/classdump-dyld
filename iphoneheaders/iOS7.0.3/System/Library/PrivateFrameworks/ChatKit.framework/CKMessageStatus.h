/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:57 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptDataRowObject.h>

@protocol CKMessage;
@class NSString, , NSAttributedString;

@interface CKMessageStatus : NSObject <CKTranscriptDataRowObject> {

	NSString* _guid;
	int _status;
	<CKMessage>* _message;

}

@property (assign,nonatomic) int status;                                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) <CKMessage> * message;                                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedTranscriptText; 
+(id)thePastDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)statusWithType:(int)arg1 message:(id)arg2 ;
+(id)todayDateFormatter;
-(id)now;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)attributedTranscriptText;
-(id)initWithStatus:(int)arg1 message:(id)arg2 ;
-(id)__ck_displayGUIDWithMessage:(id)arg1 ;
-(Class)__ck_displayCellClass;
-(id)__ck_displayCellIdentifier;
-(void)__ck_prewarmForDisplay;
-(id)__ck_displayContactImage;
-(UIEdgeInsets)__ck_displayContentAlignmentInsets;
-(BOOL)__ck_displayTranscriptOrientation;
-(BOOL)__ck_transcriptUsesTextAlignmentInsets;
-(BOOL)__ck_displayDuringSend;
-(BOOL)__ck_wantsDrawerLayout;
-(CGSize)__ck_displaySize:(UIEdgeInsets*)arg1 ;
-(id)guid;
@end
