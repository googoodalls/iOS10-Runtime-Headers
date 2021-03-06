/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteDeviceMonitor : NSObject <HMFLogging, HMFNetMonitorDelegate, IDSServiceDelegate> {
    HMDAccountRegistry * _accountRegistry;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDRemoteDeviceMonitorDelegate> * _delegate;
    NSMapTable * _devices;
    HMFNetMonitor * _netMonitor;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _reachable;
    IDSService * _service;
}

@property (nonatomic, readonly) HMDAccountRegistry *accountRegistry;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMDRemoteDeviceMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFNetMonitor *netMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, readonly) bool reachable;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (readonly) NSArray *unreachableDevices;

+ (id)logCategory;
+ (id)pingMessageForDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_deviceInformationForDevice:(id)arg1;
- (void)_handleGlobalReachabilityChange;
- (void)_notifyDeviceReachabilityChange:(bool)arg1 forDevice:(id)arg2;
- (void)_sendPingToDevice:(id)arg1;
- (id)accountRegistry;
- (id)clientQueue;
- (void)confirmDevice:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (id)deviceInformationForDevice:(id)arg1;
- (id)devices;
- (id)dumpState;
- (void)handleAccountRemoved:(id)arg1;
- (void)handleAddedDeviceInformation:(id)arg1;
- (void)handleCurrentDeviceUpdate:(id)arg1;
- (void)handleDeviceRemovedFromAccount:(id)arg1;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isReachable;
- (id)netMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)propertyQueue;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDelegate:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)startMonitoringDevice:(id)arg1;
- (void)stopMonitoringDevice:(id)arg1;
- (id)unreachableDevices;

@end
