//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYReqPacket.h"

@class NSString;

@interface TXYFilePacket : TXYReqPacket
{
    int _sliceSize;
    long long estimatedSize;
    NSString *_fileSHA;
    _Bool _attachedData;
    CDUnknownBlockType _complete;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _stateChange;
}

@property(nonatomic) _Bool attachedData; // @synthesize attachedData=_attachedData;
@property(nonatomic) int sliceSize; // @synthesize sliceSize=_sliceSize;
@property(copy, nonatomic) CDUnknownBlockType stateChange; // @synthesize stateChange=_stateChange;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void).cxx_destruct;
- (long long)estimatedTotalSize;
- (id)fileName;
- (int)maxFileBufferSize;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSString *fileSHA;
- (long long)fileSize;
- (id)loadFileData:(unsigned long long)arg1 Len:(unsigned long long)arg2;
- (long long)mutilSessionCount:(long long)arg1;
- (int)packetIndentity;
- (id)packFileUploadHeader:(id)arg1 offset:(long long)arg2 size:(long long)arg3;
- (id)getMutilSegmentData;
- (id)getSegmentData;
- (id)getFilePacket:(int)arg1;
- (void)resetParams;
- (void)setUploadControlReq:(struct FileControlReq *)arg1;
- (id)getControlPacket;

@end
