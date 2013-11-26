/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>

@interface GQDScalarPath : GQDPath {

	int mType;
	double mScalar;
	CGSize mSize;

}
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(CGPathRef)createBezierPath;
-(double)scalar;
-(BOOL)isRect;
-(CGSize)size;
-(int)type;
-(id).cxx_construct;
-(BOOL)isRectangular;
@end
