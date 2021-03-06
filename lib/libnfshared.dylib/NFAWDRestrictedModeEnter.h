/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDRestrictedModeEnter : NSObject <NFAWDEventProtocol> {
    bool  _contactlessMode;
    AWDNFCJCOPRestrictedModeEvent * _metric;
}

@property (nonatomic, retain) NSData *attackLog;
@property (nonatomic) bool contactlessMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCJCOPRestrictedModeEvent *metric;
@property (readonly) Class superclass;

- (id)attackLog;
- (bool)contactlessMode;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setAttackLog:(id)arg1;
- (void)setContactlessMode:(bool)arg1;
- (void)setMetric:(id)arg1;
- (void)updateExceptionUUID:(id)arg1;

@end
