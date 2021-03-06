/*
* This header is generated by classdump-dyld 0.7
* on Friday, July 3, 2015 at 6:37:31 AM Central European Summer Time
* Operating System: Version 8.3 (Build 12F70)
* Image Source: /private/var/db/stash/_.2t7K5z/Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteTableViewCell.h>
#import <Cydia/CyteTableViewCellDelegate.h>

@interface PackageCell : CyteTableViewCell <CyteTableViewCellDelegate> {

	MenesObjectHandle<UIImage, 0> icon_;
	MenesObjectHandle<NSString, 0> name_;
	MenesObjectHandle<NSString, 0> description_;
	BOOL commercial_;
	MenesObjectHandle<NSString, 0> source_;
	MenesObjectHandle<UIImage, 0> badge_;
	MenesObjectHandle<UIImage, 0> placard_;
	BOOL summarized_;

}
-(void)drawContentRect:(CGRect)arg1 ;
-(void)drawSummaryContentRect:(CGRect)arg1 ;
-(void)drawNormalContentRect:(CGRect)arg1 ;
-(void)setPackage:(id)arg1 asSummary:(BOOL)arg2 ;
-(id)init;
-(id)accessibilityLabel;
@end

