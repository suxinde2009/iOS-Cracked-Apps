//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasisHttpDao.h"

@interface FXShakeLotteryDao : FXBasisHttpDao
{
}

- (id)doPostWithPostMethodInfo:(id)arg1 AndError:(id *)arg2;
- (id)doGetWithGetMethodInfo:(id)arg1 AndError:(id *)arg2;
- (id)shakeLottery:(int)arg1 roomId:(int)arg2 error:(id *)arg3;
- (int)getMyShakeInfo:(int)arg1 error:(id *)arg2;
- (id)getShakeConfig:(id *)arg1;

@end
