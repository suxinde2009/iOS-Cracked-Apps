//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class IQYBindCouponsManager, NSString, UIButton, UILabel, UITextField;

@interface QYWalletAddCashCouponViewController : QYCommonViewController <UITextFieldDelegate, IQYDataLoadManagerDelegate>
{
    UITextField *_numTF;
    UILabel *_tipsLab;
    UIButton *_addBtn;
    IQYBindCouponsManager *_addCouponMgr;
}

@property(retain, nonatomic) IQYBindCouponsManager *addCouponMgr; // @synthesize addCouponMgr=_addCouponMgr;
@property(nonatomic) __weak UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(nonatomic) __weak UILabel *tipsLab; // @synthesize tipsLab=_tipsLab;
@property(nonatomic) __weak UITextField *numTF; // @synthesize numTF=_numTF;
- (void).cxx_destruct;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)requestAddCoupon;
- (void)addBtnDidClick;
- (void)initSubViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

