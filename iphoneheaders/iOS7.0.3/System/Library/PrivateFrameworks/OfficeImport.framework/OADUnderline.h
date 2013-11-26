/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OADStroke, OADFill;

@interface OADUnderline : NSObject {

	OADStroke* mStroke;
	OADFill* mFill;
	unsigned char mType;
	unsigned mIsUsingTextFill : 1;
	unsigned mIsUsingTextStroke : 1;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)fill;
-(id)stroke;
-(void)setFill:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(void)setIsUsingTextFill:(BOOL)arg1 ;
-(void)setIsUsingTextStroke:(BOOL)arg1 ;
-(BOOL)isUsingTextFill;
-(BOOL)isUsingTextStroke;
-(id)initWithStroke:(id)arg1 fill:(id)arg2 type:(int)arg3 ;
@end
