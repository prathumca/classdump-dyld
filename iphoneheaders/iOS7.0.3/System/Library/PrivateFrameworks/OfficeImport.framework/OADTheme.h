/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {

	OADBaseStyles* mBaseStyles;
	OADDefaultProperties* mShapeDefaults;
	OADDefaultProperties* mLineDefaults;
	OADDefaultProperties* mTextDefaults;

}

@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,retain) OADDefaultProperties * shapeDefaults; 
@property (nonatomic,retain) OADDefaultProperties * lineDefaults; 
@property (nonatomic,retain) OADDefaultProperties * textDefaults; 
-(void)dealloc;
-(id)init;
-(id)baseStyles;
-(id)lineDefaults;
-(id)shapeDefaults;
-(id)textDefaults;
-(void)addDefaults;
-(id)addShapeDefaults;
-(id)addLineDefaults;
-(id)addTextDefaults;
-(void)setBaseStyles:(id)arg1 ;
-(void)setShapeDefaults:(id)arg1 ;
-(void)setLineDefaults:(id)arg1 ;
-(void)setTextDefaults:(id)arg1 ;
@end
