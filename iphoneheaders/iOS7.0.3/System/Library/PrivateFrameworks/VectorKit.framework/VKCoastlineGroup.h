/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKStyle, VGLMeshVendor;

@interface VKCoastlineGroup : NSObject {

	VKStyle* _style;
	BOOL _visible;
	SCD_Struct_VG165 _offsetDirection;
	VGLColor _shadowColor;
	VGLColor _antialiasingBrushColor;
	float _shadowWidth;
	float _antialiasingBrushWidth;
	unsigned _tilePointSize;
	VGLMeshVendor* _coastlineVendor;

}

@property (nonatomic,readonly) VKStyle * style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL visible;                                   //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) SCD_Struct_VG165 offsetDirection;               //@synthesize offsetDirection=_offsetDirection - In the implementation block
@property (assign,nonatomic) VGLColor shadowColor;                           //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) VGLColor antialiasingBrushColor;                //@synthesize antialiasingBrushColor=_antialiasingBrushColor - In the implementation block
@property (assign,nonatomic) float shadowWidth;                              //@synthesize shadowWidth=_shadowWidth - In the implementation block
@property (assign,nonatomic) float antialiasingBrushWidth;                   //@synthesize antialiasingBrushWidth=_antialiasingBrushWidth - In the implementation block
@property (nonatomic,readonly) VGLMeshVendor * coastlineVendor;              //@synthesize coastlineVendor=_coastlineVendor - In the implementation block
-(void)dealloc;
-(id)style;
-(void)setShadowColor:(VGLColor)arg1 ;
-(VGLColor)shadowColor;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(id).cxx_construct;
-(unsigned)triangleCount;
-(id)initWithStyle:(id)arg1 tilePointSize:(unsigned)arg2 ;
-(id)coastlineVendor;
-(void)setShadowWidth:(float)arg1 ;
-(void)setAntialiasingBrushColor:(VGLColor)arg1 ;
-(void)setAntialiasingBrushWidth:(float)arg1 ;
-(void)setOffsetDirection:(SCD_Struct_VG165)arg1 ;
-(SCD_Struct_VG165)offsetDirection;
-(float)shadowWidth;
-(VGLColor)antialiasingBrushColor;
-(float)antialiasingBrushWidth;
@end
