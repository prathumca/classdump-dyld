/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class PKLocalPass, NSString;

@interface WDGetPassResult : NSObject {

	PKLocalPass* _localPass;
	NSString* _lastModified;

}

@property (nonatomic,retain) PKLocalPass * localPass;              //@synthesize localPass=_localPass - In the implementation block
@property (nonatomic,retain) NSString * lastModified;              //@synthesize lastModified=_lastModified - In the implementation block
-(id)localPass;
-(void)setLocalPass:(id)arg1 ;
-(void)setLastModified:(id)arg1 ;
-(void)dealloc;
-(id)lastModified;
@end
