//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZXAbstractRSSReader.h"

@class NSMutableArray, ZXIntArray;

@interface ZXRSSExpandedReader : ZXAbstractRSSReader
{
    _Bool _startFromEven;
    NSMutableArray *_rows;
    ZXIntArray *_startEnd;
    NSMutableArray *_pairs;
}

@property(nonatomic) _Bool startFromEven; // @synthesize startFromEven=_startFromEven;
@property(readonly, nonatomic) NSMutableArray *pairs; // @synthesize pairs=_pairs;
@property(readonly, nonatomic) ZXIntArray *startEnd; // @synthesize startEnd=_startEnd;
@property(retain, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (_Bool)adjustOddEvenCounts:(int)arg1;
- (_Bool)isNotA1left:(id)arg1 isOddPattern:(_Bool)arg2 leftChar:(_Bool)arg3;
- (id)decodeDataCharacter:(id)arg1 pattern:(id)arg2 isOddPattern:(_Bool)arg3 leftChar:(_Bool)arg4;
- (id)parseFoundFinderPattern:(id)arg1 rowNumber:(int)arg2 oddPattern:(_Bool)arg3;
- (void)reverseCounters:(id)arg1;
- (_Bool)findNextPair:(id)arg1 previousPairs:(id)arg2 forcedOffset:(int)arg3;
- (id)retrieveNextPair:(id)arg1 previousPairs:(id)arg2 rowNumber:(int)arg3;
- (int)nextSecondBar:(id)arg1 initialPos:(int)arg2;
- (_Bool)checkChecksum;
- (id)constructResult:(id)arg1 error:(id *)arg2;
- (_Bool)isPartialRow:(id)arg1 of:(id)arg2;
- (void)removePartialRows:(id)arg1 from:(id)arg2;
- (void)storeRow:(int)arg1 wasReversed:(_Bool)arg2;
- (_Bool)isValidSequence:(id)arg1;
- (id)checkRows:(id)arg1 current:(int)arg2;
- (id)checkRows:(_Bool)arg1;
- (id)decodeRow2pairs:(int)arg1 row:(id)arg2 error:(id *)arg3;
- (void)reset;
- (id)decodeRow:(int)arg1 row:(id)arg2 hints:(id)arg3 error:(id *)arg4;
- (id)init;

@end
