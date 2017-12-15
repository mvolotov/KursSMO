#ifndef SERVERPROGRAMM_H
#define SERVERPROGRAMM_H


enum DistributionType
{
    Liniar, Exponential
};

enum ProgrammStatus
{
    AwaitingExecution, Executing, Executed, Discarded
};

class ServerProgramm
{
public:
    ServerProgramm(DistributionType, double);
    ProgrammStatus Status = AwaitingExecution;
    double ExecutionTimeLeft;
    double ExecutionTime;
    double ExecutionAwaitingTime = 0;
    void Update(double);
    inline bool operator==(const ServerProgramm &rhs) const {
        if(rhs.Status == ProgrammStatus::Executing)
            return true;
    }
private:
    bool isExponential;
    double expAverage;
};

#endif // SERVERPROGRAMM_H
