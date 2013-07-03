/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, NSMutableData, NSDictionary;

@interface StreamingUnzipState : NSObject  {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned int total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned int total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned int adler; 
        unsigned int reserved; 
    } _zlibState;
    unsigned long long _lastResumptionSavedOffset;
    unsigned long long _hashedChunkSize;
    unsigned long long _bytesHashedInChunk;
    unsigned long long _uncompressedBytesOutput;
    NSString *_unzipPath;
    NSArray *_md5Hashes;
    unsigned long _currentLFRecordAllocationSize;
    struct CC_MD5state_st { 
        unsigned int A; 
        unsigned int B; 
        unsigned int C; 
        unsigned int D; 
        unsigned int Nl; 
        unsigned int Nh; 
        unsigned int data[16]; 
        int num; 
    } _md5Context;
    NSDictionary *_streamInfoDict;
    NSString *_lastChunkPartialHash;
    NSMutableData *_unsureData;
    NSMutableData *_incompleteData;
    NSMutableData *_unfinishedCompressedData;
    struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; } *_currentLFRecord;
    unsigned long long _thisStageBytesComplete;
    unsigned long long _currentOffset;
    unsigned long long _outputFileOffsetAtLastBlockEnd;
    unsigned long long _recordsProcessed;
    unsigned long long _totalRecordCount;
    unsigned long _currentCRC32;
    int _currentOutputFD;
    unsigned short _currentLFMode;
    unsigned char _streamState;
    unsigned char _lastBlockEndNumUnusedBits;
    unsigned char _lastBlockEndLastByte;
    BOOL _currentLFIsStreamMetadata;
}

@property(readonly) struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; }* zlibState;
@property(readonly) NSString * unzipPath;
@property(retain) NSDictionary * streamInfoDict;
@property(retain) NSString * lastChunkPartialHash;
@property(retain) NSMutableData * unsureData;
@property(retain) NSMutableData * incompleteData;
@property(retain) NSMutableData * unfinishedCompressedData;
@property struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }* currentLFRecord;
@property unsigned long currentLFRecordAllocationSize;
@property unsigned long long thisStageBytesComplete;
@property unsigned long long currentOffset;
@property(readonly) unsigned long long hashedChunkSize;
@property(readonly) unsigned long long bytesHashedInChunk;
@property unsigned long currentCRC32;
@property int currentOutputFD;
@property unsigned long long recordsProcessed;
@property unsigned long long totalRecordCount;
@property unsigned long long uncompressedBytesOutput;
@property unsigned short currentLFMode;
@property unsigned char streamState;
@property BOOL currentLFIsStreamMetadata;


- (unsigned long long)totalRecordCount;
- (void)setRecordsProcessed:(unsigned long long)arg1;
- (void)setUnfinishedCompressedData:(id)arg1;
- (void)setIncompleteData:(id)arg1;
- (void)_internalSetStreamState:(unsigned char)arg1;
- (id)_removeAndRecreateDirectoryAtPath:(id)arg1;
- (void)clearSavedState;
- (id)_checkHashForOffset:(unsigned long long)arg1;
- (id)finishStream;
- (void)setTotalRecordCount:(unsigned long long)arg1;
- (void)setUnsureData:(id)arg1;
- (void)setStreamInfoDict:(id)arg1;
- (void)setLastChunkPartialHash:(id)arg1;
- (void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1;
- (void)setUncompressedBytesOutput:(unsigned long long)arg1;
- (unsigned long long)uncompressedBytesOutput;
- (id)unfinishedCompressedData;
- (struct z_stream_s { char *x1; unsigned int x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned int x13; unsigned int x14; }*)zlibState;
- (void)setThisStageBytesComplete:(unsigned long long)arg1;
- (id)incompleteData;
- (unsigned long)currentCRC32;
- (void)setCurrentCRC32:(unsigned long)arg1;
- (BOOL)currentLFIsStreamMetadata;
- (unsigned short)currentLFMode;
- (void)setCurrentLFMode:(unsigned short)arg1;
- (id)streamInfoDict;
- (void)setCurrentLFIsStreamMetadata:(BOOL)arg1;
- (unsigned long long)recordsProcessed;
- (void)setCurrentLFRecordAllocationSize:(unsigned long)arg1;
- (void)setCurrentLFRecord:(struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*)arg1;
- (unsigned long)currentLFRecordAllocationSize;
- (void)markResumptionPoint;
- (id)updateMD5HashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3 onlyFinishCurrentChunk:(BOOL)arg4;
- (id)checkLastChunkPartialHash;
- (id)lastChunkPartialHash;
- (unsigned long long)bytesHashedInChunk;
- (unsigned long long)hashedChunkSize;
- (unsigned long long)thisStageBytesComplete;
- (struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*)currentLFRecord;
- (unsigned char)streamState;
- (id)serializeState;
- (id)updateMD5HashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long)arg3;
- (void)setCurrentOffset:(unsigned long long)arg1;
- (id)unsureData;
- (int)currentOutputFD;
- (void)setCurrentOutputFD:(int)arg1;
- (id)unzipPath;
- (void)setStreamState:(unsigned char)arg1;
- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned long long)currentOffset;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end